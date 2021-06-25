


```latex {hide cmd run_on_save}
\documentclass{report}
\title{Circuit Analysis} 
\author{J} 
\date{June 2021}

\begin{document}
\maketitle
\end{document} 
```
 
<!-- pagebreak -->
  
[TOC]
# 1. ***DC Circuits***
## 1.1. **Resistor Only Circuits**

### 1.1.1. -What does it mean for a resistor to be in series or in parallel?


<center>
 
**SERIES**  
Components that share a single node *only with* each other.  
**PARALLEL**  
Components that share two nodes between each other.

</center>

### 1.1.2. -How do you combine resistors that are in parallel or in series?

<div align="center">
<table>
<tr>
<td align = "center">

**FOR SERIES**  
Addition

$$
    R_{Total} = R_1 + R_2 + R_3 ... R_Z
$$

</td>
<td align="center">

**FOR PARALLEL**  
Inverse Addition/Product-Over-Sum 

$$
    \frac{1}{R_T}= \frac{1}{R_1} + \frac{1}{R_2} + \frac{1}{R_3} ... \frac{1}{R_Z}\\
$$

OR

$$
    \overbrace{R_T = \frac{R_1R_2}{R_1+R_2}}^{\text{For Combining Two Resistors At A Time Only}}
$$


</td>
</table>
</div>

### 1.1.3. -How do you perform calculations for basic circuits?

<div align="center">

For basic circuits, we use the following laws:


<table>
<tr>
<td align = "center">

**KVL**
$$
    \text{In a closed loop:}\\
    \sum_0^N V_x = 0\\
    \text{N is the number of voltage drops}
$$
</td>
<td align = "center">

**KCL**
$$
    \text{For a node:}\\
    \sum_0^N I_x = \sum_0^K I_y\\
    \text{N and K are the number of currents} \\ 
    \text{going into the node and out of the node, respectively.}
$$

</td>
</tr>
</table>
<table>

These formulas are exclusive to TWO resistors circuit:

<tr>
<td align = "center">

If you know the total voltage drop between two components in series and their resistances\
You can find the individual voltage drops of each component:
$$
    V_1 = \frac{V_T R_1}{R_1 + R_2}
$$


</td>
<td align="center">

If you know the total current between two components in parallel and their resistances\
You can find the individual current going throuigh each component:
$$
    C_2=\frac{C_T R_1}{R_1+R_2}
$$


</td>
</tr>
</table>
<table>

We can also change the circuits a bit to make calculations a bit easier

<tr>
<td align = "center">

A voltage source in series with a resistor is equal to a current source in parallel with the same value resistor.  
Thus we just do a simple ohm's law and change values and the placements accordingly.

$$
    I_S = \frac{V_S}{R_{series/parallel}}
$$


</td>
</tr>
</table>
</div>

### 1.1.4. -Are there any tricks to do calculations faster on more complicated circuits?

There are two main methods for solving complicated circuits: **Nodal Analysis** or **Mesh Analysis**.
<div align="center">
<table>
<tr>
<td align = "center">

**Nodal Analysis**\
finds the node voltages of the circuit through equation manipulation of Kirchoff's Current Law.
![Nodal Analysis](https://www.electrical4u.com/images/november15/1449676342.gif)\
Instructions:
1. Decide on an arbitrary current direction for each component.
2. Create KCL equations at each node. For X complex nodes, you need atleast X-1 equations.
3. For currents not already given, transform each current into the following equation:

$$
    I = \frac{V_{high} - V_{low}}{R}
$$

**Note**: Current goes from High Voltage to Low Voltage.

---

*SPECIAL CASES*  
Voltage source between two unknown nodes:\
Treat the voltage source as one giant node and do the KCL for it. In addition to making one more equation where
$$
    V_{source} = V_{high}-V_{low}
$$
 
---

4. Solve the system of equations in order to find each nodal voltage.
</td>
<td align="center">

**Mesh Analysis**\
finds the currents of the circuit through equation manipulation of Kirchoff's Voltage Law.
![Mesh Analysis](https://circuitdigest.com/sites/default/files/inlineimages/u1/Find-Current-in-Circuit-using-Mesh-Analysis.png)
Instructions:
1. For every mesh, create an arbitrary current loop. All loops must go in the same direction.
2. Do a KVL for each loop replacing every voltage drop with the following equation:

$$
    V=R_1\times\underbrace{(I_{IN} - I_{OUT} )}_{I_{IN}\text{ is the current loop you're working on}}
$$

**NOTE**: If there is a current source and it is *ONLY* part of one loop, the current source is the value of the loop when you align the directions of the loop.

---

*SPECIAL CASES*  
Current source in between two meshs:   
Combine the two meshs together and do the same steps but add this extra equation:  

$$
    \underbrace{I_{source}=I_{1}-I_{2}}_{I_1 \text{ should be the loop going in the same direction as the source.}}
$$

---

3. Solve the system of equations to find the current of each loop.  
For N meshs you need N equations.

</td>
</table>
</div>

### 1.1.5. -Are there any circuit simplification tricks to make future calculations easier?

<div align="center">

Convert the circuit into it's **Thevenin** or **Norton Equivalent**

<table>
<tr>
<td align="center">

Thevenin Circuit:  
![Thevenin Circuit](https://www.allaboutcircuits.com/uploads/articles/thevenin-resistance-equivalent-circuit-diagram3_2.jpg) 
Finding $V_{Thevnin}$ or $V_{th}$.

---  
At the point where there is going to be changes, find the open circuit voltage drop at that point.  
</td>
<td align="center">

Norton Circuit:
![Norton Circuit](https://www.allaboutcircuits.com/uploads/articles/norton-equivalent-circuit-diagram1.jpg)

Finding $I_N$:  

---

At the points of change, find the short circuit current.

</td>
</tr>
</table>

Finding $R_{th}$:

---

1. Turn off all sources *except* dependent sources.
2. At the same open circuit as before, now find the $R_{eq}$.  

Special Cases:  
The circuit has dependent sources.  
1. Put a voltage/current source at the open circuit.
    - Voltage Source: If it will be in series with the other components.
    - Current Source: If it will be in parallel with the other components.
2. Find the voltage of the source if you put a current source or the current if you put a voltage source.
3. $$ R_{th} = \frac{V_T}{I_T}
$$

</div>

## 1.2. **Capacitor/Inductor Circuits**
### 1.2.1. How do I simplify Capacitors/Inductors?


<div align="center">
<table>
<tr>
<td align="center">

SERIES:  
$$
    \frac{1}{C_T}= \frac{1}{C_1} + \frac{1}{C_2} + \frac{1}{C_3} ... \frac{1}{C_Z}\\
$$

OR

$$
    \overbrace{C_T = \frac{C_1C_2}{C_1+C_2}}^{\text{For Combining Two Capacitors At A Time Only}}
$$


</td>
<td align="center">

PARALLEL:
$$
    C_{Total} = C_1 + C_2 + C_3 ... C_Z
$$

</td>
</tr>
</table>

Inductors simplify the exact same way as resistors.

</div>
 
### 1.2.2. How to perform calculations with capacitors?

<div align="center">

To find the Energy stored in a capacitor/Inductor:

$$
    U = \frac{1}{2} C V^2 = \frac{1}{2}LI^2
$$

<table>
<tr>
<td>

To find the current of a capacitor/Inductor:
$$
    I = C\frac{dv}{dt} = \frac{1}{L}\int{V}dt 
$$

</td>
<td> 

To find the voltage of a capacitor/Inductor: 
$$V = \frac{1}{C}\int{I}dt = L\frac{dI}{dt}$$

</td>
</tr>
</table>
</div>

### 1.2.3. How to do calculations when there are switches?
<div align="center">

Main Formula:
$$
    \large V = V(\infty) + [V(0)-V(\infty)]e^{\frac{t}{\tau}}
$$
**NOTE:** You can use interchange $V$ with $I$
$$
\tau = CR = \frac{L}{R}
$$

</div>

# 2. ***AC Circuits***

## 2.1 Resistor, Capacitor, and Inductor Circuits

### 2.1.1 What is the difference between AC and DC, mathematically?

<div align="center">

Everything basically acts like a resistor and has an impedance$(Z)$ instead of a resistance.  
To make the math simplier, we transform the equations from trigonometry to the phasor/rectangular.
$$\omega = 2\pi f$$
$$
    \underbrace{Acos(\omega x + \phi)}_{\text{Trigonometric}} = \underbrace{A\phase{\phi}}_{\text{Phasor}} = \underbrace{Acos(\phi)+jsin(\phi)}_{\text{Rectangular}}
$$
<div align="center">
<table align="center">

**Resistance Conversion to Impedance**

<th>Resistors</th>
<th>Capacitors</th>
<th>Inductors</th>
<tr>
<td>

$$Z=R$$

</td>
<td>

$$Z = \frac{-j}{\omega C}$$

</td>
<td>

$$Z = jwL$$

</td>
</tr>
</table>
You combine Impedance together as if they are resistors.
The mathematics is almost the same as DC circuits, the only difference is that you have imaginary numbers.
</div>
