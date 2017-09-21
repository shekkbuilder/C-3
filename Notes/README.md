# Notes

## How to compile and execute using GNU Compiler Collection (gcc)

	Basic compile: gcc programsource.c -o executable.out

	Execute the program: executable.out


## Printing output

printf() is a C library general-purpose function that sends formatted output. The first argument is usually a string of characters that begin with % to indicate what type of output will be printed from the second argument. Here are a few different outputs used:

	%d	// Prints decimal integer.
	%6d	// Prints decimal integer of 6 chars.
	%f	// Prints floating point.
	%4.2f	// Prints floating point of 4 chars and 2 after decimal.
	%c	// Prints character.
	%s	// Prints string.
	%p	// Pointer.
	%o	// Octal.
	%x	// Hexadecimal.  


## Escape sequences

	Newline character: \n

	Tab character: \t

	Backspace character: \b

	Double-quote character: \"

	Backlash character: \\

## Working with input

scanf() is a C library function that allows a program to get data from the user. Like printf() it has a set of arguments for formatting and a second set for the values. The second group of arguments for scanf often include an ampersand symbol because they refer to pointers and not an actual location.

## Pointers

A pointer is a variable that "points" to the memory address of another variable. It's value is the address to the other variable. Pointers are defined like a normal variable except the ampersand symbol * is added before the pointers name like:

	int *pointer_variable = 5;

The statement above means the value that is in the memory address pointed to by <b>pointer_variable</b> is equal to 5.


