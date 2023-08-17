#ifndef __BUBBLE_SORT_HPP__
#define __BUBBLE_SORT_HPP__

#include <algorithm>

void bubble_sort(int *A, int N) {
    for (int i = 0; i < N-1; ++i) {
        for (int j = N-1; j > i; --j) {
            if (A[j] < A[j-1]) std::swap(A[j], A[j-1]);
        }
    }
}

#endif // __BUBBLE_SORT_HPP__
