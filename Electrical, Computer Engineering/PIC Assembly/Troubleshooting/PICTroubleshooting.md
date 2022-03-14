# PIC10F200

## Target has invalid calibration data (0x00)

### 2021 July 19

This problem occurs with the device (PIC20F200) due to a problem with the oscillator calibration. This is caused by the ``MOVLW xx`` OPCODE. This OPCODE causes the last value in the program memory to be erased. The last value (in the PIC10F200) is ``0xFF`` and this is where the oscillator value is kept. This value is programed in the factory and varied from device to device, even of the same model. This is mentioned in the datasheet (Image 1.1) as well as a post in this forum: https://www.microchip.com/forums/m541694.aspx (Image 1.2)

![](https://cdn.discordapp.com/attachments/393166518877159425/866021154754134066/Screenshot_2021-07-17_111816.png)
Image 1.1: 4.1 Program Memory Organization for the PIC10F200/204 (Page 11)

![](https://cdn.discordapp.com/attachments/789346972841672762/866850424505368596/Image_1.2.png)

Using the MPLAB X IPE I have been able to determine the following:
- Something is altering the last variable
- The value in the unused microcontrollers is preprogrammed in the unused chips (Image 1.3 and Image 1.4)
- The values may be unique to the very chips themselves (Image 1.3 and Image 1.4)

![](https://cdn.discordapp.com/attachments/802321156954259456/865703609424412682/Screenshot_2021-07-16_141111.png)
Image 1.3: Program memory of an unused microcontroller

![](https://cdn.discordapp.com/attachments/802321156954259456/865703615921127475/Screenshot_2021-07-16_141148.png)
Image 1.4: Program memory of another unused microcontroller

Alterations has been predicted to occur and has been mentioned in the datasheet:
![](https://cdn.discordapp.com/attachments/802321156954259456/865703215475458069/Screenshot_2021-07-16_141032.png)
Image 1.5: 4.6 OSCCAL Register

And a suggested course of action to avoid this problem is in the tutorial main.asm source code: https://www.circuitbread.com/tutorials/how-to-blink-an-led-part-6-microcontroller-basics-pic10f200

![](https://cdn.discordapp.com/attachments/802321156954259456/865703375675588618/Screenshot_2021-07-16_141210.png)
Image 1.6: note in the main.s file of Part 6 of the tutorial series

Using the MPLAB X IPE should, in theory, be able to change the value of the last address value, however it has not worked.

### 2021 July 20
Viewing the responses a forum (https://www.edaboard.com/threads/erasing-pic-factory-osscal-oscillator-calibration-value.138770/) a user suggests to set the value to ``0x000`` while another person suggests to change a value in the programmer settings under calibration memory.

``0x000`` is a valid value to input into the Register ``0x0FF``, however it does not solve the problem with the invalid calibration error. Logically, it would be best to look into the alternative option mentioned.

Looking at the directions and searching for the exact location for the setting lead to discovering that there was a difference in using MPASM and what the other person was using, so that did not work. Although it did seem a bit familiar so I decided to refer back to the code provided by the tutorial (Image 1.6).

The tutorial mentions something about ``PSECT`` and how when misconfigured would end up over writing the oscillator instruction at ``0xFF``. Another lead, maybe...

The research has lead to here: https://www.microchip.com/forums/m1150682.aspx and it seems that there is another datasheet that would be required to understand the ``PSECT`` function more.

### 2021 July 31
Further into a search for how to prevent the problem I have come across a forum (https://www.microchip.com/forums/m1150682.aspx) where there was a person who was trying to figure out how to use the ``PSECT`` function as well. This lead to two manuals:
- **MPLAB XC8 PIC Assembler User's Guide**: https://ww1.microchip.com/downloads/en/DeviceDoc/XC8-PIC-Assembler-UG-for-EE-50002994A.pdf
- **XC8 PIC Assembler UG for EE**: https://ww1.microchip.com/downloads/en/DeviceDoc/MPLAB%20XC8%20PIC%20Assembler%20User%27s%20Guide%2050002974A.pdf

Both of these have demonstrated to be useful.

Taking the knowledge from the provided code on CircuitBread there were two lines of code provided to avoid unintentional tampering of the oscillator calibration instruction:
- ``-Wl,-pMyCode=0h``
- ``PSECT MyCode, class=CODE, delta=2``

Turns out that they both mean the same thing, just in different ways.

### 2021 August 1
Source: **MPLAB XC8 PIC Assembler User's Guide**
- Term: ``-Wl, -pMyCode=0h``
  - ``-Wl``
    - **Table 3-1.** PIC Assembler Driver Options
    - **3.3.6** D: Define a Macro
    - **3.3.32** W: Disable all Warnings Option
    - **3.3.33** Wa: Pass Option To The Assembler Option
    - **3.3.35** Wp: Pass Option To The Preprocessor Option
    - **3.3.36** WL: Pass Option To The Linker Option
    - **3.3.37** X: Specify Source Language Option
    - **3.3.37** Xassembler Option
    - **4.8** Program Sections
    - **5.5** Assembly List Files
    - **Table 6-1** Linker Command-line Options
    - **6.1.23** W: Specify Warning Level/Map Width
    - **6.2** Psects and Relocation
    - **6.3.1** Map File Generation
    - **6.3.2.1** General Information
    - **Table 7-2.** Hexmate Command-line Options
  - ``-pMyCode=0h``
    - **4.9.40.3** Class Flag
    - **4.9.40.9** Local Flag
    - **5.4** Linker Defined Symbols
    - **Table 6-1.** Linker Command-line Options
    - **6.1.1** A: Define Linker Class
    - **6.1.17** P: Position Psect
    - **6.3.2.1** General Information
    - **7.1.1** Using the Archiver/Librarian
- Term: ``PSECT MyCode, class=CODE, delta=2``
  - ``PSECT MyCode`` (Ignore for now)
  - ``class=CODE``
    - **3.3.28** Summary Option
    - **4.8** Program Sections
    - **4.9.40** Psect Directive
    - **4.9.40.3** Class Flag
    - **5.2** Assembler-provided Psects
    - **5.3** Default Linker Classes
    - **5.3.1** Program Memory Classes
    - **5.3.2** Data Memory Classes
    - **5.3.3** Miscellaneous Classes
    - **Table 6-1.** Linker Command-line Options
    - **6.1.1** A: Define Linker Class
    - **6.1.2** C: Associate Linker Class To Psect
    - **6.1.3** D: Define Class Delta Value
    - **6.1.9** H+: Generate Enhanced Symbol File
    - **6.1.15** N: Specify Symbol Table Sorting
    - **6.1.17** P: Position Psect
    - **6.1.20** S: Place Upper Address Limit On Class
    - **6.3.2** Contents
    - **6.3.2.3** Psect Information Listed By Class
    - **6.3.2.4** Segment Listing
    - **6.3.2.5** Unused Address Ranges
    - **6.3.2.8** Module Information
  - ``delta=2``
    - **4.9.40** Psect Directive
    - **Table 4-9.** Psect Flags
    - **4.9.40.4** Delta Flag
    - **Table 6-1** Linker Command-line Options
    - **6.1.3** D: Define Class Delta Value

Source: ``MPLAB XC8 PIC Assembler User's Guide for Embedded Engineers``

### 2021 August 2
Forget about the day before. The manuals are used for PIC Assembler (``PIC-AS``) and the tutorials are in ``MPASM``.
