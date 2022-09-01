# C - Doubly linked lists
## Data Structure:
```
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```
## Prototypes:
`size_t print_dlistint(const dlistint_t *h);`

`size_t dlistint_len(const dlistint_t *h);`

`dlistint_t *add_dnodeint(dlistint_t **head, const int n);`

`dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`

`void free_dlistint(dlistint_t *head);`

`dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`

`int sum_dlistint(dlistint_t *head);`

`dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`

`int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`

## Description:
* `0-print_dlistint.c` prints all the elements of a `dlistint_t` list.
* `1-dlistint_len.c` returns the number of elements in a linked `dlistint_t` list.
* `2-add_dnodeint.c` adds a new node at the beginning of a `dlistint_t` list.
* `3-add_dnodeint_end.c`  adds a new node at the end of a `dlistint_t` list.
* `4-free_dlistint.c` frees a dlistint_t list.
* `5-get_dnodeint.c` returns the nth node of a `dlistint_t` linked list.
* `6-sum_dlistint.c` returns the sum of all the data (n) of a `dlistint_t` linked list.
* `7-insert_dnodeint.c` inserts a new node at a given position.
* `8-delete_dnodeint.c` deletes the node at index `index` of a `dlistint_t` linked list.
* `100-password` contains the password for [crackme4](https://github.com/holbertonschool/0x17.c/blob/master/crackme4).
* `102-result` contains the largest palindrome made from the product of two 3-digit numbers.
* `103-keygen.c` contains  a keygen for [crackme5](https://github.com/holbertonschool/0x17.c/blob/master/crackme5).
