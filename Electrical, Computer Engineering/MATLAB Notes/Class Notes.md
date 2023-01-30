<!--

TOGGLE PREVIEW IN VISUAL STUDIO CODE:
    Ctrl + Shift + V

This space is designated for Markdown resources:
    - General Markdown Documentation: https://markdown-guide.readthedocs.io/en/latest/index.html

    - Markdown in Visual Studio Code Documentation: https://code.visualstudio.com/docs/languages/markdown

-->

[Comment]: <> (Inline Comment)
[//]: <> (This is also a comment)
[//]: # (This is also a comment)
<!--
    This is a multiline comment
-->
## Comments
```matlab
% This is a comment.

%{
    This is a block comment.
    Do you see what I mean?
%}
```

## Display Values
Display Function - Use to display variable values
```matlab
x = 7
disp(x)
% Expected Output: 7
```

Formatted Text Function - Print Formatted Text
```matlab
x = 9
fprintf("%d lights are installed in the room next door.", x)
% Expected Output: 9 lights are installed in the room next door
```

## Variable Assignment
Assign variable to a number
```matlab
apple = 12
```

Assign variable to a character array
```matlab
pear = 'manager'
```

Assign variable to a string
```matlab
mandarin = "charlie"
```

## Math Operations
Square Root
```matlab
sqrt(4) %Square Root of 4
```

Imaginary and Complex Numbers
```matlab
complexNum1 = 3+4i
complexNum2 = 3+4j
% Both values for complexNum1 and complexNum2 are equal because i and j both represent sqrt(-1)
```

Modulo Operation
```matlab
mod(25,5) % 25 mod 5
```

Determine the Characteristics of a Complex Number
```matlab
complexNum = (7-i)/(2+10i)
abs(complexNum) % Magnitude
angle(complexNum) % Phase
```

## If Statements
If statements begin with ``if`` followed by a condition and end with ``end``

```matlab
if mod(4,2) == 0
    fprintf("Hello there.")
end
% if 4 mod 2 is equal to 0 print the text "Hello there."
```

## For Loops
For loops begin with ``for`` and a varible to be increment say ``x``. Loop terminates once ``end`` is reached.

For all values of ``x`` display the current value of ``x``.
- Display values from 1 to 100
```matlab
for x=1:100
    disp(x)
end
```

- Display values from 50 to 100
```matlab
for x=50:100
    disp(x)
end
```

While Loops
While condition is true continue the process. While loops start with ``while`` followed by a condition and end with ``end``.
```matlab
value = 300
while value < 500
    disp(value)
    value = value + 1
end
% While value is less that 500 display the value of value, while loop will run 200 times
```
