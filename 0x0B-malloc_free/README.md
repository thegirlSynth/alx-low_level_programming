# C - malloc, free
This directory contains files that illustrate the use of `malloc`, `free`, and `valgrind` in memory allocation.

## Prototypes
`char *create_array(unsigned int size, char c);`

`char *_strdup(char *str);`

`char *str_concat(char *s1, char *s2);`

`int **alloc_grid(int width, int height);`

`void free_grid(int **grid, int height);`

`char *argstostr(int ac, char **av);`

`char **strtow(char *str);`

## Description
* `0-create_array.c` creates an array of chars, and initializes it with a specific char.

* `1-strdup.c` returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

* `2-str_concat.c` concatenates two strings.

* `3-alloc_grid.c` returns a pointer to a 2 dimensional array of integers.

* `4-free_grid.c` frees a 2 dimensional grid previously created by the `alloc_grid` function.

* `100-argstostr.c` concatenates all the arguments of your program.

* `101-strtow.c` splits a string into words.

* `main.h` is a header file containing all the prototypes of functions used in this project.
