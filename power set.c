
#include <stdio.h>

int count = 0;

void powerSet(int a[], int n, int index, int subset[], int size) {
    if (index == n) {
        printf("{ ");

        for (int i = 0; i < size; i++) {
            printf("%d ", subset[i]);
        }

        printf("}\n");
        count++;
        return;
    }

    // Exclude current element
    powerSet(a, n, index + 1, subset, size);

    // Include current element
    subset[size] = a[index];
    powerSet(a, n, index + 1, subset, size + 1);
}

int main() {
    int n;

    scanf("%d", &n);

    int a[n], subset[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    powerSet(a, n, 0, subset, 0);

    printf("Count = %d\n", count);

    return 0;
}
