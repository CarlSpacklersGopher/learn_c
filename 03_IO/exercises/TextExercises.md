# 1
What output do the following calls of `printf` produce?
```
printf("%6d,%4d", 86, 1040);  // "    86,1040"
printf("%12.5e", 30.235);     // " 3.02350e+01"
printf("%.4f", 83.162);       // "83.1620"
printf("%-6.2g", .0000009979) // "1e-06 "
```
# 2
Write calls of printf that display a float variable `x` in the following formats:
```
// a) Exponential; left-justified in a field of size 8; one digit after the pt
printf("%-8.1e", x);
// b) Exponential; right-justified in a field of size 10; 6 digit after the pt
printf("%10.6e", x);
// c) fixed decimal; left-justified in a field of size 8; 3 digit after the pt
printf("%-8.3f", x);
// d) fixed decimal; right-justified in a field of size 6; 0 digit after the pt
printf("%6.0f", x);
```
# 3
For each of the following pairs of `scanf` format strings, indicate whether or not the two strings are equivalent.  If they're not, show how they can be distinguished.
```
"%d"       versus " %d"        // equivalent, space leads
"%d-%d-%d" versus "%d -%d -%d" // not equivalent, if input = "10 -20 -30", the first one will only match 10
"%f"       versus "%f "        // not equivalent, could cause program to hang as the whitespace matches the trailing \n in the input
"%f,%f"    versus "%f, %f"     // equivalent, spaces will be ignored.  Leading space in item 2 is a wildcard match of zero or more whitespaces.

```

# 4
What does is the value of each variable after this scanf call?
```
scanf("%d%f%d", &i, &x, &j)
// input = "10.3 5 6"
// i -> 10
// x -> .3
// j -> 5 
```

# 5
What does is the value of each variable after this scanf call?
```
scanf("%f%d%f", &x, &i, &y);
// input = "12.3 45.6 789"
// x -> 12.3
// i -> 45
// y -> .6 
```