#include <stdio.h>

int bubble_sort(int arr[], int n) {
    int temp;
    if (n <= 1) {
        printf("%d ", arr[0]);
        return 0;
    }
    for (int i = 0; i < n -1; i++) {
        if (arr[i] > arr[i+1]) {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    bubble_sort(arr, n - 1);
    printf("%d ", arr[n-1]);
}

int main(void) {
    int v[11] = {30,12,25,34,4,24,56,70,89,14,11};
    bubble_sort(v, 11);
    printf("\n");
    return 0;
}