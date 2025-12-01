
#include <stdio.h>

int main() {
    int n1, n2, arr1[100], arr2[100], merged[200], k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n1);
    for(int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for(int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    for(int i = 0; i < n1; i++)
        merged[k++] = arr1[i];
    for(int i = 0; i < n2; i++)
        merged[k++] = arr2[i];

    printf("Merged array: ");
    for(int i = 0; i < k; i++)
        printf("%d ", merged[i]);

    return 0;
}

