#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sayHi(char name[], int age)
{
    printf("Hello %s, you are %d.\n", name, age);
}

int main()
{
    sayHi("Pritam", 19);
    sayHi("Adani", 50);
    sayHi("Ambani", 60);
    return 0;
}
