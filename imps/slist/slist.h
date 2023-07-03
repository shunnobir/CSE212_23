#ifndef __SLIST_H__
#define __SLIST_H__

#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *node_new() {
    /*
     *  Allocate a new node and assign null to the next pointer
     */
    Node *_new = (Node*)malloc(sizeof(struct Node));
    _new->next = NULL;
    return _new;
}

void node_insert(Node **head, int data) {
    /*
     *  Create a new node with the given data
     */
    Node *_new = node_new();
    _new->data = data;

    /* 
     * Save previous head pointer to a temporary
     * variable. Then copy the previous head node
     * to the new nodes next pointer and assign new
     * node to the head.
     */
    Node *_temp = *head;
    _new->next = _temp;
    (*head) = _new;
}

void node_remove(Node **head, int data) {
    /*
     * If the list is already empty we have nothing to remove
     * Just return.
     */ 
    if (*head == NULL) return;

    /*
     * Iterate through the list starting from the next
     * pointer of the head pointer untill one of two conditions
     * are truw,
     * 1. the next node is NULL, or
     * 2. The current node's data is equal to the given data
     */ 
    Node *_iter = (*head);
    while (_iter->next != NULL && _iter->next->data != data)
        _iter = _iter->next;

    /*
     * If the node is NULL, it means we didn't find the data
     */
    if (_iter->next == NULL) return;

    /*
     * Otherwise we did find it. We save the node and
     * free the memory.
     */
    Node *_temp = _iter->next;
    _iter->next = _temp->next;
    free(_temp);
}

Node *node_search(Node *head, int data) {
    /*
     * We keep looking for the given data until one of two conditions
     * are true,
     * 1. _iter is null, meaning exhaustively searched the list,
     *    but couldn't find the data
     * 2. we found the data
     *
     * Even if we could not find the data, _iter will contain NULL,
     * which we should return to indicate we didn't find the data.
     * Otherwise _iter will contain the node that holds the data,
     * which we are still returning
     */
    Node *_iter = head;
    while (_iter != NULL && _iter->data != data)
        _iter = _iter->next;

    return _iter;
}

void node_destruct(Node **head) {
    /*
     * We iterate through the list, freeing every node.
     * We save the current node into a temporary pointer variable,
     * then we assign the next pointer to our iterator _iter.
     * And finally we free the memeory saved into _temp variable.
     * At the end we assigned NULL to the head pointer just to make sure
     * we can never access the freed memory address
     */
    Node *_iter = *head;
    while (_iter != NULL) {
        Node *_temp = _iter;
        _iter = _iter->next;
        free(_temp);
    }
    (*head) = NULL;
}


#endif //__SLIST_H__
