# tec-Functions

This document provides information and code snippets for various mathematical functions and operations, primarily focused on their implementation in C, Forth, and MINT programming languages. Below, we'll tidy up the document while retaining all the provided content.

## Float to Fraction Conversion

This code converts a 16-bit signed floating-point number into the nearest pair of 8-bit signed integers. The process involves duplicating the number, shifting it left by 8 bits (multiplying it by 256) to round the result. Then, it stores the sign, negates the number, and shifts it left by 8 bits again for another multiplication by 256. The code combines the positive and negative versions, divides the result by 256 to obtain the quotient and remainder, and further adjusts them. Finally, it subtracts the quotient from the remainder to produce the result. The code is available in `float_frac.f83`.

## Trig Functions

### Sine
- `x` in the range [-1, 1]
- `fakeSin(x) = x * (1 - abs(x))`
- `sin(x) = x - x^3/3! + x^5/5! - x^7/7! + x^9/9! - x^11/11!`

### Cosine
- `cos(x) = sum_(k=0)^∞ ((-1)^k x^(2 k))/((2 k)!)`
- `1 - x^2/2 + x^4/24 + O(x^6)`

## Hyperbolic Functions
- Hyperbolic functions include `sinh`, `cosh`, and `tanh`.
- `tanh(x) = x - x^3/3 + (2 x^5)/15 + O(x^6)`

## Random Number Generation

For random number generation, refer to the following resources:
- GitHub Repository: [tec-RANDOM](https://github.com/SteveJustin1963/tec-RANDOM)
- Mathematical Information: [Advanced Math on Z80](http://z80-heaven.wikidot.com/advanced-math#toc52)

## Square Root of x
- `y = x * x`

## Factorial (n!)

Here are two examples of Forth code functions to calculate the factorial (`n!`) of an integer `n`:

**Example 1: Recursive Approach**
```forth
: factorial ( n -- n! )
    1 swap
    begin
        dup while
            dup *
            1 -
    repeat
;
```
Explanation:
- This function calculates `n!` using a recursive approach, which is suitable for smaller values of `n`.

**Example 2: Optimized Approach**
```forth
: factorial ( n -- n! )
    dup 2 < 
    if drop 1 exit then
    1 swap 
    begin
        dup while
            dup *
            1 -
        repeat
        dup factorial *
    ;
```
Explanation:
- This function calculates `n!` using an optimized iterative approach, which is more efficient for large values of `n`.

## Exponent (x^y)

Here's a Forth code snippet to calculate the exponent `x^y`:

```forth
: exponent ( base power -- result )
    1 swap 0 ?DO
        2DUP *
    LOOP DROP ;
```
Explanation:
- This code calculates `x^y` by repeatedly multiplying the base `x` by itself `y` times.

## Absolute Value (|x|)

The absolute value of `x` is denoted as `|x|`.

## Constants
- Pi (π) is approximately equal to 22/7.
- Euler's number (e) is approximately equal to 19/7.

## Pascal’s Triangle

## Prime Numbers

References:
- [How Do You Find Exact Values for the Sine of All Angles?](https://www.intmath.com/blog/mathematics/how-do-you-find-exact-values-for-the-sine-of-all-angles-6212)
- [Integer Square Root](https://en.wikipedia.org/wiki/Integer_square_root)

 
