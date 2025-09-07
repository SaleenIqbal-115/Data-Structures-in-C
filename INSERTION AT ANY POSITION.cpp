#include <stdio.h>

int main() {
    int arr[100];
    int n, i, pos, value;

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

    printf("\nEnter position to insert (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &value);

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
    } else {
        for (i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = value;
        n++;

        printf("Array after insertion: ");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
