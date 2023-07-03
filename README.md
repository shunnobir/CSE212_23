# CSE212 - Batch 22

This repository will be used to upload all the codes and materials of each lab class.

# Classes

1. [Lab1 - 15/06/2023](./lab1)
   - Topic: `array`, `struct`

# Codes

1. [Lab1: Query 1](./lab1/lab1.c)
2. [Class1: Node structure](./class1/a.c)

# Implementations

1. [Singly Linked List](./imps/slist/slist.h)

# Home Work

1. Singly Linked List<br>
   a. Improve the `node_remove(Node **head, int data)` function to remove data from head<br>
   b. Implement a function `node_insert_back(Node **head, int data)` that inserts data at the
   end of the list.<br>
   c. Implement a function `node_insert_g(Node **head, int data, Node *after)` that inserts a data after
   any given node `after`<br>
   d. Implement two functions `long long sum(Node *head) and `int min(Node \*head to calculate the sum and the minimum of the data given in the file `input.in`<br>
   e. Implement a singly linked list that can store information about a pharmacy.
   Implement the following functions,<br>
   - `pharmacy_insert(Pharmacy **head, Pharmacy *data)`: where `head` is the given list of pharmacies and `data` is the pharmacy to be inserted
   - `pharmacy_remove(Pharmacy **head, Pharmacy *data)`: where `head` is the given list of pharmacies and `data` is the pharmacy to be removed
   - `pharmacy_search(Pharmacy *head, Pharmacy *data)`: where `head` is the given list of pharmacies and `data` is the pharamcy to be searched
