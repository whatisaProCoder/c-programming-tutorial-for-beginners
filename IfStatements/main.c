#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int max(int num1, int num2, int num3)
{
    int result;
    if(num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if(num2 >=num1 && num2 >=num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }
    return result;
}

int main()
{
    if(3 > 2 || 2 != 5)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    printf("%d", max(4, 7, 9));
    return 0;
}
