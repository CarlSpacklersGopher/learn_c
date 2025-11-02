```
/* Address: */
int i = 0;
int *p = &i;  /* Get memory address of i ("Address operator") */
	
/* Indirection: */
int i = 0;
int *p = &i;  /* Get memory address of i */
...
printf("%d", *p) // Prints value of object p points to (so, i)


```



Use `&p` to get the address of a pointer
Use `*p` to get the object the pointer points to

Since p is a pointer to the i object, setting `*p` and i are the same thing.
Setting `*p = 5` will change the value of i to 5.  ==This is dangerous, and should be avoided==

