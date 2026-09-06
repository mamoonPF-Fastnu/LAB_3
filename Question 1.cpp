#include <stdio.h>

int main() {
    char name[50];
    int age;
    char city[50];

    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your city: ");
    scanf(" %[^\n]", city);

    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("City: %s\n", city);

    return 0;
}