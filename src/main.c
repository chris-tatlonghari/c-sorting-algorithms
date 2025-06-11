#include <stdio.h>
#include <stdbool.h>
#include "bubble_sort.h"

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};

    char input = 'x';

    while (true) {
        printf("---------------------------------------\n");
        printf("Choose a sorting algorithm:\n");
        printf("1. Bubble Sort (b)\n");
        printf("2. Merge Sort (m)\n");
        printf("3. Exit (q)\n");
        printf("---------------------------------------\n");

        scanf("%c", &input);

        if (input == 'b' || input == 'B' || input == '1') {
            printf("Sorting via Bubble Sort..\n");
            bubble_sort(arr, 7);
            break;
        }
        else if (input == 'm' || input == 'M' || input == '2') {
            printf("Sorting via Merge Sort..\n");
            break;
        }
        else if (input == 'q' || input == 'Q' || input == '3') {
            printf("Exiting the program..\n");
            break;
        } 
        else {
            printf("Invalid input. Please try again.\n");
        }
    }

    return 0;
}