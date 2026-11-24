
#include <stdio.h>

void merge(int a[], int l, int mid, int r) {
    int temp[100];
    int i = l, j = mid + 1, k = 0;

    while (i <= mid && j <= r) {
        if (a[i] <= a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= r)
        temp[k++] = a[j++];

    for (i = l, k = 0; i <= r; i++, k++)
        a[i] = temp[k];

    printf("Merge: ");
    for (i = l; i <= r; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void mergeSort(int a[], int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;

        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, r);

        merge(a, l, mid, r);
    }
}

int main() {
    int n = 5;
    int a[] = {5, 1, 4, 2, 8};

    mergeSort(a, 0, n - 1);

    printf("Final sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
