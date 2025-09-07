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
    printf("Traversal of Array (Display Elements):\n");
    for (i = 0; i < n; i++) {
        printf("Element at index %d = %d\n", i, arr[i]);
    }

    return 0;
}
