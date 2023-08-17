#ifndef __BUBBLE_SORT_H__
#define __BUBBLE_SORT_H__

#include "swap.h"

void bubble_sort(int *A, int N) {
    for (int i = 0; i < N-1; ++i) {
        for (int j = N-1; j > i; --j) {
            if (A[j] < A[j-1]) swap(&A[j], &A[j-1]);
        }
    }
}

#endif // __BUBBLE_SORT_H__
