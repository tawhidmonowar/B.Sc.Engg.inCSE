#include <stdio.h>
#include <string.h>
int main()
{
    int i,strLen;
    char name[100];
    printf("Enter A String: ");

    gets(name);
    strrev(name);


    printf("%s",name);


    return 0;
}