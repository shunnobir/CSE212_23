def insertion_sort(A):
    N = len(A)
    for j in range(2, N):
        key = A[j]
        i = j-1
        while i >= 0 and A[i] > key:
            A[i+1] = A[i]
            i -= 1
        A[i+1] = key

