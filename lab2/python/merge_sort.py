INF = 1000000007

def merge(A, l, mid, r):
    t1 = []
    t2 = []
    
    for i in range(l, mid+1):
        t1.append(A[i])
    for i in range(mid+1, r+1):
        t2.append(A[i])

    t1.append(INF)
    t2.append(INF)

    j = 0
    k = 0
    for i in range(l, r+1):
        if t2[j] <= t1[k]:
            A[i] = t2[j]
            j += 1
        else:
            A[i] = t1[k]
            k += 1

def merge_sort(A, l, r):
    if l >= r:
        return
    
    mid = (l + r) // 2
    merge_sort(A, l, mid)
    merge_sort(A, mid+1, r)
    merge(A, l, mid, r)
