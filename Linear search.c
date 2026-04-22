include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10000

// Linear search function
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // return index if found
        }
    }
    return -1; // not found
}

int main() {
    int arr[SIZE];
    int key, result;

    // Seed random number generator
    srand(time(0));

    // Generate random numbers
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100000; // random numbers between 0–99999
    }

    // Take key input
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Measure time
    clock_t start, end;
    double cpu_time_used;

    start = clock();

    result = linearSearch(arr, SIZE, key);

    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Output result
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    printf("Time taken: %f seconds\n", cpu_time_used);

    return 0;
}
