#0x12-singly_linked_lists
* [lists.h](./lists.h): Header file containing definitions and prototypes for all
types and functions written for the project.
* [0-print_list.c](./0-print_list.c): C function that prints all the
elements of a `list_t` list.
  - If `str` is `NULL`, the function prints `[0] (nil)`.

* [1-list_len.c](./1-list_len.c): C function that returns the number of elements
in a linked `list_t` list.

* [2-add_node.c](./2-add_node.c): C function that adds a new node at the
beginning a of a `list_t` list.
  - If the function fails - returns `NULL`.
  - Otherwise - returns the address of the new element.

* [3-add_node_end.c](./3-add_node_end.c): C function that adds a new node at
the end of a linked `list_t` list.
  - If the function fails - returns `NULL`.
  - Otherwise - returns the address of the new element.

* [4-free_list.c](./4-free_list.c): C function that frees a `list_t` list.
