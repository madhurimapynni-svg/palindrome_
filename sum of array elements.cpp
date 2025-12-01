#include <stdio.h>

int main() {
    int n, arr[100], largest, smallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    largest = smallest = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) largest = arr[i];
        if(arr[i] < smallest) smallest = arr[i];
    }

    printf("Largest = %d\nSmallest = %d", largest, smallest);
    return 0;
}

