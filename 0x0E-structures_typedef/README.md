# C - Structures, typedef

## Data Structure:
```
/**
 * struct dog - information about dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
 
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
```

## Prototypes:
`void init_dog(struct dog *d, char *name, float age, char *owner);`

`void print_dog(struct dog *d);`

`void print_dog(struct dog *d);`

`dog_t *new_dog(char *name, float age, char *owner);`

`void free_dog(dog_t *d);`

## Description:
*  `dog.h` is the header file that contains all function prototypes used in this project, and defines a new type `dog_t` as a new name for the type `struct dog`.

*  `1-init_dog.c`  initializes a variable of type `struct dog`.
*  `2-print_dog.c` prints a `struct dog`
*  `4-new_dog.c` creates a new dog.
*  `5-free_dog.c` frees dogs.

