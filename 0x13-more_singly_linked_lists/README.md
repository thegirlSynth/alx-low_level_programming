# Singly Linked Lists

## Definition:
A singly linked list is a type of linked list that is unidirectional; that is, it can only be traversed in one direction from head to the last node (tail).
It is the simplest type of linked list and every node contains some data, and a pointer to the next node; apart from the head which only contains a pointer to the first node.
Also, the tail node contains some data, and a pointer to `NULL`.

---

## Prototypes:

This is the format of the struct used in this project.
```
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

Other prototypes include:

`size_t print_listint(const listint_t *h)`

`size_t listint_len(const listint_t *h)`

`listint_t *add_nodeint(listint_t **head, const int n)`

`listint_t *add_nodeint_end(listint_t **head, const int n)`

`void free_listint(listint_t *head)`

`void free_listint2(listint_t **head)`

`int pop_listint(listint_t **head)`

`listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)`

`int sum_listint(listint_t *head)`

`listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)`

`int delete_nodeint_at_index(listint_t **head, unsigned int index)`

`listint_t *reverse_listint(listint_t **head)`

`size_t print_listint_safe(const listint_t *head)`

`size_t free_listint_safe(listint_t **h)`

`listint_t *find_listint_loop(listint_t *head)`

---

### More description

* Script 0-print_listint.c  prints all the elements of a listint_t list.
* Script 1-listint_len.c returns the number of elements in a linked listint_t list.
* Script 2-add_nodeint.c adds a new node at the beginning of a listint_t list.
* Script 3-add_nodeint_end.c adds a new node at the end of a listint_t list.
* Script 4-free_listint.c frees a listint_t list.
* Script 5-free_listint2.c frees a listint_t list.
* Script 6-pop_listint.c deletes the head node of a listint_t linked list, and returns the head node’s data (n).
* Script 7-get_nodeint.c returns the nth node of a listint_t linked list.
* Script 8-sum_listint.c returns the sum of all the data (n) of a listint_t linked list.
* Script 9-insert_nodeint.c inserts a new node at a given position.
* Script 10-delete_nodeint.c deletes the node at index index of a listint_t linked list.
* Script 100-reverse_listint.c reverses a listint_t linked list.
* Script 101-print_listint_safe.c prints a listint_t linked list.
* Script 102-free_listint_safe.c frees a listint_t list.
* Script 103-find_loop.c finds the loop in a linked list.
