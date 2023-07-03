#include <stdio.h>
#include "slist.h"

int max(Node *head) {
    if (head == NULL) return -1;

    Node *_iter = head;
    int _max = _iter->data;
    while (_iter != NULL) {
        if (_max < _iter->data)
            _max = _iter->data;
        _iter = _iter->next;
    }

    return _max;
}

int main() {
    FILE *fd = NULL;
    if ((fd = fopen("input.in", "r")) == NULL) {
        printf("error: could not open file 'input.in'\n");
        return -1;
    }

    Node *head = NULL;
    int n;
    fscanf(fd, "%d", &n);

    for (int i = 0; i < n; ++i) {
        int data;
        fscanf(fd,  "%d", &data);    
        node_insert(&head, data);
    }
    
    fclose(fd); 

    int _max = max(head);
    printf("Maximum value: %d\n", _max);

    node_destruct(&head);
}
