#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    ptr = ptr + 2;
    printf("Value at ptr = %d\n", *ptr);

    int a = 10, b = 20;
    int *ptr1 = &a, *ptr2 = &b;
    int sum = *ptr1 + *ptr2;

    printf("Sum = %d\n", sum);

    return 0;
}
