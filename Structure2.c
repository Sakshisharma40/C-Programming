
#include <stdio.h>

struct Book {
    int id;
    char name[50];
    float price;
};

int main() {
    struct Book b[3];
    int i, max = 0;

    for(i = 0; i < 3; i++) {
        printf("Enter book ID, name and price:\n");
        scanf("%d %s %f", &b[i].id, b[i].name, &b[i].price);
    }

    for(i = 1; i < 3; i++) {
        if(b[i].price > b[max].price) {
            max = i;
        }
    }

    printf("\nMost Expensive Book Details:\n");
    printf("Book ID: %d\n", b[max].id);
    printf("Book Name: %s\n", b[max].name);
    printf("Book Price: %.2f\n", b[max].price);

    return 0;
}
