#include <stdio.h>

int main(){
    char name[100];
    int age;
    char hobby[100];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your hobby: ");
    scanf("%s", hobby);

    printf("Name: %s\nAge: %d\nHobby: %s", name, age, hobby);
    return 0;
}
