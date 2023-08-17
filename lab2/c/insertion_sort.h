#ifndef __INSERTION_SORT_H__
#define __INSERTION_SORT_H__

void insertion_sort(int *A, int N) {
    for (int j = 2; j < N; ++j) {
        int key = A[j];
        int i = j-1;
        while (i >= 0 && A[i] > key) {
            A[i+1] = A[i];
            --i;
        }
        A[i+1] = key;
    }
}

#endif // __INSERTION_SORT_H__
