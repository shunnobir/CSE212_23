#ifndef __SLIST_H__
#define __SLIST_H__

#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *node_new() {
    // Allocate a new node and assign null to the next pointer
    Node *_new = (Node*)malloc(sizeof(struct Node));
    _new->next = NULL;
    return _new;
}

void node_insert(Node **head, int data) {
    // Create a new node with the given data
    Node *_new = node_new();
    _new->data = data;

    Node *_temp = *head;
    _new->next = _temp;
    (*head) = _new;
}

void node_remove(Node **head, int data) {
    if (*head == NULL) return;

    Node *_iter = (*head);
    while (_iter->next != NULL && _iter->next->data != data)
        _iter = _iter->next;

    if (_iter->next == NULL) return;

    Node *_temp = _iter->next;
    _iter->next = _temp->next;
    free(_temp);
}

Node *node_search(Node *head, int data) {
    Node *_iter = head;
    while (_iter != NULL && _iter->data != data)
        _iter = _iter->next;

    return _iter;
}

void node_destruct(Node **head) {
    Node *_iter = *head;
    while (_iter != NULL) {
        Node *_temp = _iter;
        _iter = _iter->next;
        free(_temp);
    }
    (*head) = NULL;
}


#endif //__SLIST_H__
