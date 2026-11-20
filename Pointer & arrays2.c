
#include <stdio.h>

int main() {
    int a[5], i, largest;
    int *p = a;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", p + i);
    }

    largest = *p;

    for(i = 1; i < 5; i++) {
        if(*(p + i) > largest) {
            largest = *(p + i);
        }
    }

    printf("Largest element = %d", largest);

    return 0;
}
