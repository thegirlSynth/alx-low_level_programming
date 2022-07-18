# Singly Linked Lists

## Definition:
A singly linked list is a type of linked list that is unidirectional; that is, it can only be traversed in one direction from head to the last node (tail).
It is the simplest type of linked list and every node contains some data, and a pointer to the next node; apart from the head which only contains a pointer to the first node. 
Also, the tail node contains some data, and a pointer to `NULL`.

---

## Prototypes:

This is the format of the struct used in this project:
```
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```
