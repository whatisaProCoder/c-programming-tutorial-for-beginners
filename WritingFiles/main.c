#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fpointer = fopen("employees.txt", "w");
    //r, read
    //w, write => overrides the content
    //a, append => adds new content
    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");
    fclose(fpointer);
    return 0;
}
