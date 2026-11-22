#include <stdio.h>

int findFloor(int a[], int n, int key)
{
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (a[mid] <= key)
        {
            ans = a[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
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

    int result = findFloor(a, n, key);

    if (result == -1)
        printf("none");
    else
        printf("Floor = %d", result);

    return 0;
}