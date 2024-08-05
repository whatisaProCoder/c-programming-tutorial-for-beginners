#include <stdio.h>
#include <stdlib.h>

void program1()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old.\n", age);
}

void program2()
{
    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);               // here use %lf for double type
    printf("Your gpa is %f.\n", gpa); // here use %f for double type
}

void program3()
{
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c.\n", grade);
}

void program4()
{
    char name[20];
    printf("Enter your first name: ");
    scanf("%s", name); // scanf cannot input sentence
    printf("Your first name is %s.\n", name);
}

void program5()
{
    char name[20];
    printf("Enter your full name: ");
    fgets(name, 20, stdin); // fgets inputs string of specified length
    printf("Your full name is %s\n", name);
}

int main()
{
    program4();
    return 0;
}
