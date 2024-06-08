#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);

    reverse_array(array, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

