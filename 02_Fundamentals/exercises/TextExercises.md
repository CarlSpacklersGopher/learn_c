# Exercises
---
## Section 2.2
### #2
Consider the following program:

```
#include <stdio.h>

int main(void)
{
	printf("Parkinson's Law:\nWork expands so as to");
	printf("fill the time\n");
	printf("available for its completion.\n");
	return 0;
}
```

a) Identify the directives and statements in this program
- Directives are the `#include`
- Statements are everything in the function.  All the `printf` statements and the `return` statement
b) What output does the program produce?

```
Parkinson's Law:
Work expands so as tofill the time
available for its completion.
```


## Section 2.7
### #5
Which of the following are not legal C identifiers?
```
- 100_bottles // illegal
- _100_bottles // legal
- one__hundred__bottles // legal
- bottles_by_the_hundred // legal
```

### #6
Why is it not a good idea for an identifier to contain more than one adjacent underscore (as in current__balance for example)?
- harder to read, when using current__balance elsewhere in the program, writer may miss the second underscore.  That creates a new variable.

### #7
Which of the following are keywords in C?

```
- for  //not valid - reserved
- If  // valid - capitalized
- main //not valid - reserved
- printf //not valid - std library 
- while // not valid - reserved
```

### #8
How many tokens are in the following statement?

```
answer=(3*q-p*p)/3;
answer
=
(
3
*
q
-
p
*
p
)
/
3
;
```
### #9
Add spaces to #8

```
answer = (3 * q - p * p) / 3;
```

### #10
Which spaces in the dweight.c program are essential?
