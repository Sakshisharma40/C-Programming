
#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int *p = arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }

    printf("Array elements are:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }

    return 0;
}
