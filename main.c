#include <stdio.h>
#define SIZE 100

int main(void) {
    // Write a program in C to count the total number of duplicate elements in an array.
    int n;
    int arr[SIZE];
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array: ", n);

    for (int i = 0; i < n; ++i) {
        printf("\nElement - %d: ", i);
        scanf("%d",  &arr[i]);
    }

    int duplicateCount = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicateCount++;
                break;
            }
        }
    }

    printf("Total number of duplicate elements found in the array is: %d", duplicateCount);

    return 0;
}
