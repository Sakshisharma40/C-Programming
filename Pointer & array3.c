#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};

    printf("Using a[i] = %d\n", a[2]);
    printf("Using *(a+i) = %d\n", *(a + 2));

    return 0;
}