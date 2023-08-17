#ifndef __SWAP_H__
#define __SWAP_H__

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


#endif // __SWAP_H__
