
#include <stdio.h>

void merge(int a[], int l, int mid, int r) {
    int i = l, j = mid + 1, k = 0;
    int temp[r - l + 1];

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
    int n;

    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    mergeSort(a, 0, n - 1);

    int majority = 0;
    int found = 0;

    for (int i = 0; i < n;) {
        int j = i;

        while (j < n && a[j] == a[i]) {
            j++;
        }

        if (j - i > n / 2) {
            majority = a[i];
            found = 1;
            break;
        }

        i = j;
    }

    if (found)
        printf("Majority = %d\n", majority);
    else
        printf("No majority\n");

    return 0;
}
