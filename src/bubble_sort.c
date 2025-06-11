#include "bubble_sort.h"
#include <stdio.h>

void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void print_arr(char *msg, int *arr, int n) {
    printf("%s: ", msg);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubble_sort(int *arr, int n) {
    print_arr("Contents of array before sorting", arr, n);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }

    print_arr("Contents of array after sorting", arr, n);
}