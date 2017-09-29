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

Here are a few different formats for data types used:

<ul>
	<li>%d - Prints decimal integer.</li>
	<li>%6d	- Prints decimal integer of 6 chars.</li>
	<li>%f - Prints floating point.</li>
	<li>%4.2f - Prints floating point of 4 chars and 2 after decimal.</li>
	<li>%c - Prints character.</li>
	<li>%s - Prints string.</li>
	<li>%p - Pointer.</li>
	<li>%o - Octal.</li>
	<li>%x - Hexadecimal.</li>
</ul>

### Escape sequences

<ul>
	<li>Newline character: \n</li>
	<li>Tab character: \t</li>
	<li>Backspace character: \b</li>
	<li>Double-quote character: \"</li>
	<li>Backlash character: \\</li>
</ul>

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

### Example

Initialize a pointer with another variable's memory address

	int intVar = 25;
	int *ptrVar;

	ptrVar = &intVar;	// ptrVar now points to same memory location of intVar which contains 25

	*ptrVar = intVar;	// passing the value 25 from intVar to ptrVar
	
	*ptrVar = 50;	// changing ptrVar value to 50

	// ptr = 100;  doesn't work; like trying to set the memory address to 100

For those two variables <b>intVar</b> is the value while <b>&intVar</b> is the memory address of the value. <b>*ptrVar</b> is the value while <b>ptrVar</b> is the memory address of the value.

## Arrays

### How to create an array

	int arrayOne[4];	// create array with 4 elements

	int arrayTwo[] = {54, 21, 89, 125, 3};	// create and populate array

	arrayOne[0] = 20;	// assigns 20 to index 0 of arrayOne

### Create, populate, and print an array with a loop

	int array[5];

    for (int i = 0; i < 5; i++)
    {
        array[i] = i + 1;  // populate elements
        printf("Index %d: %d\n", i, array[i]);  // print elements
    }

### To determine how many elements are in an array we can use the sizeof() function:

	elements = sizeof(my_array) / sizeof(int);

### Passing to a function

You can not pass an array as a parameter in a function. You have to pass it as a pointer. The name of an array without the [] is the address of the first element in the array.

In a function, you pass the address of the array like:

	int my_array[5];

	// pass the address of the array to the function like:
	function(my_array);

	// or
	function(&my_array[0]);

	// function being called
	int function(int the_array[])
	{
		// function code here
	}

### Declare a multidimensional array

	char names[12][25];

### Declare a 3D array

	char date[100][12][31];

## Strings

A string in C is an array of characters that end with a null (\0). C doesn't have a built in data type for strings but it has a library for working with and manipulating strings called <b><string.h></b>.

	my_name[] = {“Jae Logan”};	// will have a size of 10 elements number 0 – 9.

	my_name[0] = ‘J’; 
	my_name[1] = ‘a’; 
	my_name[2] = ‘e’; 
	my_name[3] = ‘ ’;
	my_name[4] = ‘L’; 
	my_name[5] = ‘o’; 
	my_name[6] = ‘g’; 
	my_name[7] = ‘a’;
	my_name[8] = ‘n’;
	my_name[9] = ‘\0’;

### Create and print string using character array.

	char strArray[] = {"This is my string array."};
	printf("%s\n", strArray);	// Output: This is my string array.

### Common string functions

<ul>
	<li><b>strlen()</b> – returns the length of a string</li>
	<li><b>strcpy()</b> – copies a null terminated string into a variable</li>
	<li><b>strcat()</b> – concatenates strings</li>
	<li><b>strcmp()</b> – compares the values of strings</li>
</ul>

## Structures

A structure is a ‘collection’ of one or more variables, potentially of different types that are grouped together for convenience. They contain data that defines a particular set of information. They are similar to rows of a table in a database. 

A structure name and non-structure variable can have the same name. Also member variable names that are the same can exist inside of multiple structures.

### How to create a structure

Use the keyword struct to define. The names of structures are often called structure tags.

	struct graph_point
	{
		int x, y;	// members of the structure
	}

Once the structure has been defined a new variable of the structure type can be created.

	struct graph_point point;	// create variable point with structure members x and y
	struct graph_point point = {10, 25};	// create variable and populate members

### Nesting structures

It's also possible to nest structures like using two coordinates to construct a rectangle

	struct rectangle
	{
		// create members of rectangle struct from nested graph_point struct
		struct graph_point a;
		struct graph_point b;
	};

### Referencing structures

The structure member operator ‘.’ connects the structure name and the member name

	printf (“%d, %d”, point.x, point.y)	// prints out x and y members of struct variable point

	/* if declare a variable of struct rectangle called rect_one 
	a single member of the sub-struct graph_point can be referenced: */
	
	struct rectangle rect_one;
	rect_one.a.x;

### File operations

<ul>
	<li><b>fopen()</b> – Creates a new file for use or opens a new existing file for use</li>
	<li><b>fclose()</b> – Closes a file which has been opened for use</li>
	<li><b>getc()</b> – Reads a character from a file</li>
	<li><b>putc()</b> – Writes a character to a file</li>
	<li><b>fprintf()</b> – Writes a set of data values to a file</li>
	<li><b>fscanf()</b> – Reads a set of data values from a file</li>
	<li><b>getw()</b> – Reads a integer from a file</li>
	<li><b>putw()</b> – Writes an integer to the file</li>
	<li><b>fseek()</b> – Sets the position to a desired point in the file</li>
	<li><b>ftell()</b> - Gives the current position in the file</li>
</ul>
