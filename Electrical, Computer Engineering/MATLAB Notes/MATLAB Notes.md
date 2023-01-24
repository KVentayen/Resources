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

# Introduction to MATLAB&reg; for Engineers
**Author:** William J. Palm III

**ISBN:** 978-0-07-353487-9

This is a book that my roommate (Spring 2023) had, not required text.

## Chapter 1: An Overview of MATLAB&reg;

### Table 1.1-1 Scalar arithmetic operations

| Symbol | Operation | MATLAB Form |
| --- | --- | --- |
| ``^`` | exponentiation:  $a^b$ | ``a^b``|
| ``*`` | multiplication: $ab$ | ``a*b`` |
| ``/`` | right division: $a/b=\frac{a}{b}$ | ``a/b`` |
| ``\`` | left division: $a\backslash b=\frac{b}{a}$ | ``a\b`` |
| ``+`` | addition: $a+b$ | ``a+b`` |
| ``-`` | subtraction: $a-b$ | ``a-b`` |

### Table 1.1-2 Order of precedence
| Precedence | Operation |
| ----- | ----- |
| First | Parenthese, evaluated starting eith the innermost pair. |
| Second | Exponentiation, evaluated from left to right. |
| Third | Multiplication and division with equal precedence, evaluated from left to right. |
| Fourth | Addition and subtraction with equal precedence, evaluated from left to right. |

### Example: Volume of a Cylinder
Solve for the volume of a Cylinder in MATLAB

$$
r=\sqrt{\frac{V}{\pi h}}
$$

```matlab
>>r = 8;
>>h = 15;
>>V = pi*r^2*h;
>>V = V + 0.2*V;
>>r = sqrt(V/(pi*h))
r =
   8.7636
```

