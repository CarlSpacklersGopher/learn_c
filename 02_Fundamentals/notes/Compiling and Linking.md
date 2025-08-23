Composed of 3 parts -
- Pre-processor
- Compiler
- Linker
# Pre-processor
- Scans through the text of the .c file and
	- Handles all Directives (denoted by lines that start with #)
	- Imports any external libraries as defined in `#include` lines
	- Replaces any [[Constants]] called out in `#define` lines

# Compiler
- Takes the text of the .c file and converts it to object code

# Linker
- Takes the object code output from the compiler and converts it to machine code to be executed by the CPU.


# Example compiler calls:
`$ gcc -o nameofcompiledfile nameofcfile`

May have to make nameofcompiledfile executable

Run it using
`$ ./nameofcompiledfile`