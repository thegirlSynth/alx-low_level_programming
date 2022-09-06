# C - More malloc, free
This directory contains more files that illustrate the practical application of `malloc`, `calloc`, and `realloc`.
## Prototypes
`void *malloc_checked(unsigned int b);`

`char *string_nconcat(char *s1, char *s2, unsigned int n);`

`void *_calloc(unsigned int nmemb, unsigned int size);`

`int *array_range(int min, int max);`

`void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);`

## Description
* `0-malloc_checked.c` allocates memory using `malloc`.

* `1-string_nconcat.c` concatenates two strings.

* `2-calloc.c` allocates memory for an array, using `malloc`.

* `3-array_range.c` creates an array of integers.

* `100-realloc.c` reallocates a memory block using `malloc` and `free`.

* `101-mul.c` multiplies two positive numbers.
  * Usage: `mul num1 num2`
  * `num1` and `num2` will be passed in base 10
  * Prints the result, followed by a new line
  * If the number of arguments is incorrect, it prints `Error`, followed by a new line, and exit with a status of `98`
  * `num1` and `num2` should only be composed of digits. If not, it prints `Error`, followed by a new line, and exit with a status of `98`

* `main.h` is the header file containing all the prototypes of the functions used in this project.
