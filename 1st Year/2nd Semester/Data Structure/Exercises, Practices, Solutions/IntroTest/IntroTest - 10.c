#include <stdio.h>
#include <string.h>

int main()
{

    char n[100];
    printf("Enter The String: ");
    gets(n);
    int x;

    x = strlen(n);
    printf("%d Characters in %s.\n",x,n);


    return 0;
}
