/*********************************************************
 * C PROGRAMMING: A MODERN APPROACH, Second Edition
 * By K. N. King
 *
 * Chapter 9
 * Project 1
 *********************************************************/

/*
 * Selection Sort.  Algorithm:
 * 1. Searches array to find largest element
 * 2. Moves that element to the end of the list
 * 3. Calls itself recursively to sort the first n-1 elements of the array.
 * */

#include <stdio.h>

#define LEN 10


void print_array(int arr[], int arr_len) {
    for (int i = 0; i < arr_len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort(int to_sort[], int len) {

    if (len == 1) {
        return;
    }

    // Find the biggest item in the list so far
    int idx_biggest = 0;
    int biggest = 0;
    for (int i = 0; i < len; i++) {
        if (to_sort[i] > biggest) {
            biggest = to_sort[i];
            idx_biggest = i;
        }
    }

    // Swap this item with the last one in the list
    int last = to_sort[len - 1];
    to_sort[idx_biggest] = last;
    to_sort[len - 1] = biggest;

    // Call this recursively with the next smallest element
    sort(to_sort, len - 1);

}


int main(void)
{
    printf("Enter %d numbers, separated by spaces: ", LEN);

    int to_sort[LEN];
    for (int i=0; i < LEN; i++) {
        scanf("%d", &to_sort[i]);
    }

    sort(to_sort, LEN);

    printf("Sorted Array:\n");
    print_array(to_sort, LEN);

}


