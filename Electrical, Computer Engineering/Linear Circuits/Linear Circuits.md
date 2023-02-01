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

# Kirchoff's Laws

## Kirchoff's Current Law
$$
\sum i = -1 A
$$

## Kirchoff's Voltage Law
$$
\sum V = -1 V
$$

## Ohm's Law
$$
V = (i) \cdot (R)
$$

$$
[\text{Volts}]=[\text{Amperes}][\text{Ohms}]
$$

# Capacitor Equations
## Solve for Charge
$$
Q = (C) \cdot (V)
$$

$$
[\text{Coulombs}]=[\text{Farads}]\cdot[\text{Volts}]
$$

## Current Across a Capacitor Given Definition of Charge
$$
\frac{d}{dt} Q = \frac{d}{dt} [C \cdot V]
$$
$$
i = C \frac{d}{dt} V
$$

## Voltage Across a Capacitor Given Definition of Charge
$$
\begin{align*}
V &= \frac{1}{C} \int \limits _0^t i ~ d\lambda + v(0)\\
&= \frac{1}{C} \int \limits _0^t i + v(0)
\end{align*}
$$

# Resistor Combinations
## Resistors in Series

Given that Resistors $R_1$ and $R_2$ are in series.
$$
R_{Total} = R_1 + R_2
$$

## Resistors in Parallel
Given that Resistors $R_3$ and $R_4$ are in parallel.
$$
R_{Total} = \frac{R_3 R_4}{R_3 + R_4}
$$

# Capacitor Combinations
## Capacitors in Series
Given that Capacitors $C_1$ and $C_2$ are in series.
$$
C_{Total} = \frac{C_1 C_2}{C_1 + C_2}
$$

## Capacitors in Parallel
Given that Capacitors $C_3$ and $C_4$ are in parallel.
$$
C_{Total} = C_3 + C_4
$$