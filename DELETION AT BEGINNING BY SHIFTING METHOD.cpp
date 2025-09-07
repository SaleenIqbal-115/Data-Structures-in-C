#include <stdio.h>
int main() {
    int arr[100];
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; 

    printf("\nArray after deleting first element: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
