#ifndef __MERGE_SORT_H__
#define __MERGE_SORT_H__

constexpr int const INF = 1000000007;

void merge(int *A, int l, int mid, int r) {
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int t1[n1 + 1], t2[n2 + 1];
    for (int i = 0; i < n1; ++i) t1[i] = A[l + i];
    for (int i = 0; i < n2; ++i) t2[i] = A[mid + i + 1];

    t1[n1] = INF;
    t2[n2] = INF;

    int j = 0, k = 0;
    for (int i = l; i <= r; ++i) {
        if (t2[j] <= t1[k]) {
            A[i] = t2[j]; 
            ++j;
        } else {
            A[i] = t1[k];
            ++k;
        }
    }
}

void merge_sort(int *A, int l, int r) {
    if (l >= r) return;

    int mid = (l + r) / 2;
    merge_sort(A, l, mid);
    merge_sort(A, mid+1, r);
    merge(A, l, mid, r);
}

#endif // __MERGE_SORT_HPP__


