# C - Singly linked lists

## Data Structure:
```
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```
## Prototypes:
`size_t print_list(const list_t *h);`

`size_t list_len(const list_t *h);`

`list_t *add_node(list_t **head, const char *str);`

`list_t *add_node_end(list_t **head, const char *str);`

`void free_list(list_t *head);`

## Description:

* `0-print_list.c` prints all the elements of a `list_t` list.
* `1-list_len.c` returns the number of elements in a linked `list_t` list.
* `2-add_node.c` adds a new node at the beginning of a `list_t` list.
* `3-add_node_end.c` adds a new node at the end of a `list_t` list.
* `4-free_list.c` frees a `list_t` list.
* `100-first.c` prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the `main` function is executed.
* `101-hello_holberton.asm` prints `Hello, Holberton`, followed by a new line.`
* `lists.h` is the header file that contains the prototypes of all the functions used in this project.
