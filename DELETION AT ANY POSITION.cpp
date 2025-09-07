#include <stdio.h>
int main() {
    int arr[100];  
    int n, pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array before deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter position to delete: ");
    scanf("%d", &pos);

    if (pos <= 0 || pos > n) {
        printf("Invalid position!\n");
    } else {
        for (i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("Array after deletion: ");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
