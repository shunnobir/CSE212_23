def bubble_sort(A):
    N = len(A)
    for i in range(0, N-1):
        for j in range(N-1, i, -1):
            if A[j] < A[j-1]:
                A[j], A[j-1] = A[j-1], A[j] # This is how you swap in python

