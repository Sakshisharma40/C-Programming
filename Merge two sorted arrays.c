
#include <stdio.h>

int main() {
    int n, m, i, j, k;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter first sorted array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &m);

    int b[m];

    printf("Enter second sorted array: ");
    for(i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    int c[n + m];

    i = 0;
    j = 0;
    k = 0;

    // Merge step
    while(i < n && j < m) {
        if(a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    // Copy remaining elements of first array
    while(i < n) {
        c[k++] = a[i++];
    }

    // Copy remaining elements of second array
    while(j < m) {
        c[k++] = b[j++];
    }

    printf("Merged sorted array: ");
    for(i = 0; i < n + m; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
