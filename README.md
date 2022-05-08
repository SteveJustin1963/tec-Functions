# tec-Functions

draft, convert entries to MINT


### Sine 
\\ x in [-1,1]
```
fakeSin(x) = x (1 - abs(x))
```
```
sin(x) = x - x^3/3! + x^5/5! - x^7/7! + x^9/9! - x^11/11!
```

### Cosine

(Taylor series)

```
cos(x) = sum_(k=0)^∞ ((-1)^k x^(2 k))/((2 k)!)`

1 - x^2/2 + x^4/24 + O(x^6)
```


### tanh(x)

`x - x^3/3 + (2 x^5)/15 + O(x^6)`

```
\\ forth
\\ crude integer approximation of tanh(x). The graphs are actually pretty close.

: tanh ( n1--n2 ) dup 82 < if 85 * 100 / else 25 * 100 / 51 + then 99 min -99 max ;

a := if a<82 then 85a/100 else 25a/100+51;
a := limit a, -99..99;
```

### random
- https://github.com/SteveJustin1963/tec-RANDOM

```
:A 7 x@ * 3 + " x! 32555 > (`_`)(`|`);
:B 10000(A);
```

### sqrt

- https://en.wikipedia.org/wiki/Integer_square_root

### X!

### ABS

### Hyp

### Pi, e, 




