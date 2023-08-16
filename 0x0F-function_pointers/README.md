# :octocat: 0x0F. C - Function pointers

## :metal: Tasks

Title | Resources
----- | ---------
[0. What's my name](./0-print_name.c) | A function that prints a name. Name is printed with a desired function `(*f)(char *)` passed along in its parameter.
[1. If you spend too much time thinking about a thing, you'll never get it done](./1-array_iterator.c) | A function that executes a function `(*action)(int)` given as a parameter on each element of an array.
[2. To hell with circumstances; I create opportunities](./2-int_index.c) | A function that uses a function `(*cmp)(int)` given as a parameter to find matching (or suitable) integers in an array of ints.
[3. A goal is not always meant to be reached, it often serves simply as something to aim at](./3-main.c) | A simple calculator using function pointers to call desired operator function.
[4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker](./100-main_opcodes.c) | A program that prints the opcodes of its own main function.

## :+1: Resources

### :wheel_chair: Prototypes

0. void print_name(char *name, void (*f)(char *));

1. void array_iterator(int *array, size_t size, void (*action)(int));
2. int int_index(int *array, int size, int (*cmp)(int));
