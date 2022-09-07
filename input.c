/*
Author: Henry Danso;
Purpose: Printing the the screen Hey...
Date: 07|09|22

*/

#include <stdio.h>
int main() {
    //declaring variables
    double x;
    char name[100];
    int age;

    //takes input
    printf("Enter a double value: ");
    scanf("%lf",&x);

    printf("What is your name: ");
    scanf("%s", &name);

    printf("How old are you: ");
    scanf("%d", &age);
    //prints out the input
    printf("\nYour double value is: %lf", x);
    printf("\nYour name is: %s", name);
    printf("\nYour age is: %d", age);

    return 0;
}