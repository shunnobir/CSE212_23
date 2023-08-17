import random
from bubble_sort import bubble_sort
from insertion_sort import insertion_sort
from merge_sort import merge_sort

def test_bubble_sort():
    print('\nBubble Sort: ')
    N = random.randint(1, 15);
    A = []      # This is similar to declaring empty array (called list in python)
    for i in range(0, N):
        A.append(random.randint(0, 100))

    print(f'Before sort: {A}')
    bubble_sort(A)
    print(f'After sort: {A}')

def test_insertion_sort():
    print('\nInsertion Sort: ')
    N = random.randint(1, 15);
    A = []      # This is similar to declaring empty array (called list in python)
    for i in range(0, N):
        A.append(random.randint(0, 100))

    print(f'Before sort: {A}')
    insertion_sort(A)
    print(f'After sort: {A}')

def test_merge_sort():
    print('\nMerge Sort: ')
    N = random.randint(1, 15);
    A = []      # This is similar to declaring empty array (called list in python)
    for i in range(0, N):
        A.append(random.randint(0, 100))

    print(f'Before sort: {A}')
    merge_sort(A, 0, N-1)
    print(f'After sort: {A}')



if __name__ == '__main__':
    test_bubble_sort()
    test_insertion_sort()
    test_merge_sort()
