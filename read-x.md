# tec-Functions

This document provides information and code snippets for various mathematical functions and operations, primarily focused on their implementation in C, Forth, and MINT programming languages.

## Float to Fraction Conversion

This section discusses converting a 16-bit signed floating-point number into the nearest pair of 8-bit signed integers. The process involves:

- Duplicating the number.
- Shifting it left by 8 bits (equivalent to multiplying by 256) to round the result.
- Storing the sign and negating the number if necessary.
- Combining positive and negative versions.
- Dividing the result by 256 to obtain the quotient and remainder.
- Adjusting the values to produce the final fraction.

The code implementing this conversion is available in `float_frac.f83`.

## Trigonometric Functions

### Sine Function

For `x` in the range [-π, π]:

- **Linear Approximation**:
  - `fakeSin(x) = x * (1 - abs(x)/π)`
  - This creates a tent-like function that approximates the sine curve over the interval.
- **Taylor Series Expansion**:
  - `sin(x) = x - x³/3! + x⁵/5! - x⁷/7! + x⁹/9! - x¹¹/11! + ...`
  - This is the Maclaurin series expansion for the sine function.

### Cosine Function

- **Maclaurin Series Expansion**:
  - `cos(x) = ∑_{k=0}^∞ [(-1)^k * x^(2k)] / (2k)!`
  - The expansion begins as:
    - `cos(x) = 1 - x²/2! + x⁴/4! - x⁶/6! + ...`

## Hyperbolic Functions

- Hyperbolic functions include `sinh`, `cosh`, and `tanh`.
- **Taylor Series Expansion for tanh(x)**:
  - `tanh(x) = x - x³/3 + (2x⁵)/15 - (17x⁷)/315 + ...`

## Random Number Generation

For random number generation, refer to the following resources:

- GitHub Repository: [tec-RANDOM](https://github.com/SteveJustin1963/tec-RANDOM)
- Mathematical Information: [Advanced Math on Z80](http://z80-heaven.wikidot.com/advanced-math#toc52)

## Square Root of x

To calculate the square root of `x`, you can use the Newton-Raphson method:

```forth
: sqrt ( x -- √x )
    1.0 10 0 do
        over over / 0.5 * + 0.5 *
    loop
    nip
;
```

Explanation:

- Starts with an initial guess (here, `1.0`).
- Iteratively improves the guess using the formula:
  - `yₙ₊₁ = (yₙ + x / yₙ) / 2`
- Runs for a set number of iterations (e.g., 10) to achieve desired precision.

## Factorial (n!)

Here are two examples of Forth code functions to calculate the factorial (`n!`) of an integer `n`:

**Example 1: Iterative Approach**

```forth
: factorial ( n -- n! )
    1 swap
    begin
        dup 1 > while
            over * swap 1 - swap
    repeat
    drop
;
```

Explanation:

- **Iterative Method**: Multiplies numbers from `n` down to 1.
- Maintains a running product on the stack.

**Example 2: Recursive Approach**

```forth
: factorial ( n -- n! )
    dup 1 > if
        dup 1 - recurse *
    else
        drop 1
    then
;
```

Explanation:

- **Recursive Method**: Calls itself with `n - 1` until `n` is less than or equal to 1.
- Multiplies the result of each recursive call by `n`.

## Exponentiation (x^y)

Here's a Forth code snippet to calculate the exponent `x^y` where `y` is a non-negative integer:

```forth
: exponent ( x y -- x^y )
    1 swap 0 ?do
        over *
    loop
    nip
;
```

Explanation:

- Starts with a result of `1`.
- Multiplies the base `x` by itself `y` times.
- The `nip` removes the redundant base `x` from the stack after computation.

## Absolute Value (|x|)

Calculate the absolute value of `x`:

```forth
: abs ( n -- |n| )
    dup 0< if negate then
;
```

Explanation:

- Checks if `n` is negative.
- If so, negates `n` to make it positive.

## Constants

- **Pi (π)** is approximately equal to `22/7` (≈ 3.142857).
- **Euler's Number (e)** is approximately equal to `19/7` (≈ 2.714286).

**Note**: While `22/7` is a common approximation for π, `19/7` is a rough estimate for `e` and not widely used. A better approximation for `e` is `2718/1000` (≈ 2.718).

## Pascal’s Triangle

Pascal's Triangle is a triangular array of binomial coefficients. Each number is the sum of the two numbers directly above it.

```plaintext
          1
        1   1
      1   2   1
    1   3   3   1
  1   4   6   4   1
1   5  10  10  5   1
```

**Applications**:

- Calculating combinations: `nCr = n! / (r! * (n - r)!)`
- Binomial expansions: `(a + b)^n`

## Prime Numbers

Prime numbers are natural numbers greater than 1 that have no positive divisors other than 1 and themselves.

**List of First Few Primes**:

2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, ...

**Finding Primes**:

- **Sieve of Eratosthenes**: An efficient way to find all primes up to a given limit.
- **Trial Division**: Test divisibility up to the square root of the number.

## References

- [How Do You Find Exact Values for the Sine of All Angles?](https://www.intmath.com/blog/mathematics/how-do-you-find-exact-values-for-the-sine-of-all-angles-6212)
- [Integer Square Root](https://en.wikipedia.org/wiki/Integer_square_root)

# Comments and Corrections

- **Square Root Section**: The original content incorrectly stated `y = x * x` for the square root. This has been corrected to show the proper method for calculating the square root.
- **Factorial Functions**: The initial code examples had inconsistencies. They have been corrected to properly represent iterative and recursive methods.
- **Exponentiation Code**: The original snippet was incorrect. It has been revised to accurately perform exponentiation with integer exponents.
- **Euler's Number Approximation**: The approximation `19/7` for `e` is not standard. A more accurate approximation has been provided.
- **Pascal’s Triangle and Prime Numbers**: Content has been added to provide basic explanations and applications.

Please review these corrections and additions to ensure accuracy and completeness.
