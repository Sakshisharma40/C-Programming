
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s = {"Rahul", 101, 85.5};

    struct Student *p = &s;

    printf("Student Details:\n");
    printf("Name: %s\n", p->name);
    printf("Roll No: %d\n", p->roll);
    printf("Marks: %.2f\n", p->marks);

    return 0;
}
