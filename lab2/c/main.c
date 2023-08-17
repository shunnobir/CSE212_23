#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "bubble_sort.h"
#include "insertion_sort.h"
#include "merge_sort.h"

void print_array(int *A, int N) {
    printf("A: [");
    for (int i = 0; i < N; ++i) printf(" %d", A[i]);
    printf(" ]\n");
}

void test_bubble_sort() {
    printf("\nBubble Sort:\n");
    int N = rand() % 15 + 1; // Generate a random number between [1, 15]
    int A[N];
    for (int i = 0; i < N; ++i) A[i] = rand() % 101; // Assign a random number between [0, 100]

    printf("Before sort: ");
    print_array(A, N);

    bubble_sort(A, N);
    printf("After sort: ");
    print_array(A, N);
}

void test_insertion_sort() {
    printf("\nInsertion Sort:\n");
    int N = rand() % 15 + 1; // Generate a random number between [1, 15]
    int A[N];
    for (int i = 0; i < N; ++i) A[i] = rand() % 101; // Assign a random number between [0, 100]

    printf("Before sort: ");
    print_array(A, N);

    insertion_sort(A, N);
    printf("After sort: ");
    print_array(A, N);
}

void test_merge_sort() {
    printf("\nMerge Sort:\n");
    int N = rand() % 15 + 1; // Generate a random number between [1, 15]
    int A[N];
    for (int i = 0; i < N; ++i) A[i] = rand() % 101; // Assign a random number between [0, 100]

    printf("Before sort: ");
    print_array(A, N);

    merge_sort(A, 0, N-1);
    printf("After sort: ");
    print_array(A, N);
}

int main() {
    srand(time(NULL));

    test_bubble_sort();
    test_insertion_sort();
    test_merge_sort();
}
