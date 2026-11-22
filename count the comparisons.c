#include <stdio.h>

int linearSearch(int a[], int n, int key)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        count++;

        if (a[i] == key)
            break;
    }

    return count;
}

int binarySearch(int a[], int n, int key)
{
    int low = 0, high = n - 1;
    int count = 0;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        count++;

        if (a[mid] == key)
            break;
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return count;
}

int main()
{
    int n, key;

    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &key);

    int l = linearSearch(a, n, key);
    int b = binarySearch(a, n, key);

    printf("Linear = %d, Binary = %d", l, b);

    return 0;
}