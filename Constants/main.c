#include <stdio.h>
#include <stdlib.h>

int main()
{
    // normal variables can be modified
    int num = 5;
    printf("%d\n", num);
    num = 8;
    printf("%d\n", num);

    // const int makes variables constant
    const int FAV_NUM = 7;
    printf("Favourite Number : %d\n", FAV_NUM);

    // "Pritam", 19 are constants
    printf("%s is %d\n", "Pritam", 19);

    return 0;
}
