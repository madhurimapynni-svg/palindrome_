#include <stdio.h>

int main() {
    int n, arr[100], pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to insert: ");
    scanf("%d", &pos);
    printf("Enter value: ");
    scanf("%d", &value);

    for(int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = value;
    n++;

    printf("Array after insertion: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

