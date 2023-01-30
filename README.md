# tec-Functions


work in progress c, forth then into MINT


## float to fraction

This code takes a 16-bit signed floating point number and converts it to the nearest pair of 8-bit signed integers. It starts by duplicating the number, then shifting it left 8 bits to multiply it by 256 and round the result. It then stores the sign of the number and negates it, shifting it left 8 bits to multiply it by 256 again. The code then adds the positive and negative versions together and divides the result by 256 to get the quotient and remainder. It then shifts the quotient and remainder right 8 bits to divide them by 256 and shift them left 8 bits to multiply them by 256. Finally, it subtracts the quotient from the remainder to get the result.  `float_frac.f83`




## Trig
- Sine 
  - `x in [-1,1]`
  - `fakeSin(x) = x (1 - abs(x))`
  - `sin(x) = x - x^3/3! + x^5/5! - x^7/7! + x^9/9! - x^11/11!`

- Cosine
  - `cos(x) = sum_(k=0)^∞ ((-1)^k x^(2 k))/((2 k)!)`
  - `1 - x^2/2 + x^4/24 + O(x^6)`

## Hyperbolic functions 
- sinh, cosh, and tanh. 
- tanh(x); `x - x^3/3 + (2 x^5)/15 + O(x^6)`

 
## Random
- 


## sqrt x 
- y=x*x

## n! 
`5*4**3*2`

```
example of a Forth code function that calculates the factorial (n!) of a given integer n:


: factorial ( n -- n! )
    1 swap
    begin
        dup while
            dup *
            1-
    repeat
;
Explanation:

: factorial ( n -- n! ) declares a new Forth function called "factorial" that takes an integer n as input and returns the factorial of n.
1 swap pushes the value 1 onto the stack and swaps it with the input value n
begin starts a loop that will continue until the loop's exit condition is met
dup while duplicates the top value of the stack (the current value of n) and checks if it is greater than zero. If it is, the loop will continue.
dup * multiplies the top two values on the stack (the current value of n and the previous value of n)
1- decrements the top value of the stack (the current value of n)
repeat ends the loop
; closes the function definition
```

```
 example of a Forth code function that calculates the factorial of a large number n using a different approach:

: factorial ( n -- n! )
    dup 2 < 
    if drop 1 exit then
    1 swap 
    begin
        dup while
            dup *
            1-
        repeat
        dup factorial *
    ;
Explanation:

: factorial ( n -- n! ) declares a new Forth function called "factorial" that takes an integer n as input and returns the factorial of n.
dup 2 < duplicate the top value of the stack (n) and check if it is less than 2.
if drop 1 exit then if n<2, drop the duplicate value and push 1 on the stack and exit the function
1 swap pushes the value 1 onto the stack and swaps it with the input value n
begin starts a loop that will continue until the loop's exit condition is met
dup while duplicates the top value of the stack (the current value of n) and checks if it is greater than zero. If it is, the loop will continue.
dup * multiplies the top two values on the stack (the current value of n and the previous value of n)
1- decrements the top value of the stack (the current value of n)
repeat ends the loop
dup factorial * call the factorial function recursively with the decremented value of n and multiply it with the current value of n.
; closes the function definition
This implementation uses recursion to break down the problem into smaller subproblems and it is more efficient for large numbers.

It's important to note that this function will consume more stack space for large numbers as it uses recursion, so you need to be careful with the stack size and make sure it does not overflow.
```



## Exponent 
- x^y


## ABS  
- |x|


## constants 
- Pi = 22/7
- e = 19/7
-

## Pascal’s Triangle


## Primes



## Ref
- https://www.intmath.com/blog/mathematics/how-do-you-find-exact-values-for-the-sine-of-all-angles-6212
- https://en.wikipedia.org/wiki/Integer_square_root

random
- https://github.com/SteveJustin1963/tec-RANDOM
- http://z80-heaven.wikidot.com/advanced-math#toc52



