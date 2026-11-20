
#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book b[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details of book %d:\n", i + 1);

        printf("Enter title: ");
        scanf(" %[^\n]", b[i].title);

        printf("Enter author: ");
        scanf(" %[^\n]", b[i].author);

        printf("Enter price: ");
        scanf("%f", &b[i].price);
    }

    printf("\n========== BOOK DETAILS ==========\n");
    printf("%-20s %-20s %-10s\n", "Title", "Author", "Price");

    for(i = 0; i < n; i++) {
        printf("%-20s %-20s Rs.%.2f\n",
               b[i].title, b[i].author, b[i].price);
    }

    return 0;
}
