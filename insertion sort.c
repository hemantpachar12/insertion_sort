#include <stdio.h>

void insertion_sort(int arr[], int n);

int main() {
    int arr[5];
    printf("Enter 5 integers to sort in ascending order:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    insertion_sort(arr, 5);
    printf("Sorted array in ascending order: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

void insertion_sort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}
