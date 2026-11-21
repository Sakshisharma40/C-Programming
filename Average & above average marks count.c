
#include <stdio.h>

// Function to calculate average
float average(int a[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + a[i];
    }

    return (float)sum / n;
}

// Function to count above average elements
int aboveAvg(int a[], int n, float avg) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > avg) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;

    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    float avg = average(a, n);

    int result = aboveAvg(a, n, avg);

    printf("Average = %.1f\n", avg);
    printf("Above = %d\n", result);

    return 0;
}
