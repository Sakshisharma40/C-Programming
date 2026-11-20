
#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    int n, i;
    float sum = 0, average;

    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book b[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter book title: ");
        scanf(" %[^\n]", b[i].title);

        printf("Enter author name: ");
        scanf(" %[^\n]", b[i].author);

        printf("Enter price: ");
        scanf("%f", &b[i].price);

        sum = sum + b[i].price;
    }

    average = sum / n;

    printf("\nAverage price of books = Rs. %.2f", average);

    return 0;
}
