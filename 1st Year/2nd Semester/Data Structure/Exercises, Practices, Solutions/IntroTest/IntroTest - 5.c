#include <stdio.h>

int main()
{
    int a,b,x,y;

    printf("Enter The First Number: ");
    scanf("%d",&a);
    printf("Enter The Secound Number: ");
    scanf("%d",&b);

    x = a/b;
    y = a%b;

    printf("Quotient is %d and Remainder is %d",x,y);

    return 0;
}
