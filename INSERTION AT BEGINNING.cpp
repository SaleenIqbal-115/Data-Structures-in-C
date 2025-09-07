#include <stdio.h>

int main() {
    int arr[100];  
    int n, i, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array before insertion at beginning:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the element to insert at the beginning: ");
    scanf("%d", &element);

    for (i = n - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    arr[0] = element;
    n++;

    printf("Array after insertion at beginning:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
