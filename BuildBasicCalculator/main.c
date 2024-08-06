#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double num1;
    double num2;
    printf("Enter first number: ");
    scanf("%lf", &num1); // lf in scanf for double
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Answer: %f", num1 + num2); // f in printf for double

    return 0;
}
