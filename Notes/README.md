# C Notes

## Compilation

### How to compile and execute using GNU Compiler Collection (gcc)

	Basic compile: gcc programsource.c -o executable.out

	Execute the program: executable.out

### How to compile on Windows using Developer Command Prompt

Open Developer Command Prompt for Visual Studio and cd to the directory containing the source file. Enter <b>cl programsource.c</b>

You can use /out:executable.exe to name the executable file. Otherwise the file name will be the same as the source file.

## Printing output

printf() is a C library general-purpose function that sends formatted output. The first argument is usually a string of characters that begin with % to indicate what type of output will be printed from the second argument.

Example:

	printf("Hello World!\n");
	printf("%d\t%s\n", int_var, str_var);

Here are a few different outputs used:

	%d	// Prints decimal integer.
	%6d	// Prints decimal integer of 6 chars.
	%f	// Prints floating point.
	%4.2f	// Prints floating point of 4 chars and 2 after decimal.
	%c	// Prints character.
	%s	// Prints string.
	%p	// Pointer.
	%o	// Octal.
	%x	// Hexadecimal.  

### Escape sequences

	Newline character: \n

	Tab character: \t

	Backspace character: \b

	Double-quote character: \"

	Backlash character: \\

## Working with input

scanf() is a C library function that allows a program to get data from the user. Like printf() it has a set of arguments for formatting and a second set for the values. The second group of arguments for scanf often include an ampersand symbol because they refer to pointers and not an actual location.

Example:

	scanf("%s", input_str);

## Pointers

A pointer is a variable that "points" to the memory address of another variable. It's value is the address to the other variable. Pointers are defined like a normal variable except the ampersand symbol * is added before the pointers name like:

	int *pointer_var = 5;	// Note: this won't compile it needs a cast

The statement above means the value that is in the memory address pointed to by <b>pointer_var</b> is equal to 5.

If you tried to change the value with the statement:

	int pointer_var = 10;

It would not make sense. The statement would mean that the memory address for <b>pointer_var</b> is 10.


