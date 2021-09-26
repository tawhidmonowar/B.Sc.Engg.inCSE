#include <stdio.h>

int main()
{
    int x,i,sum=0;
    printf("How many number do you want to enter? ");
    scanf("%d",&x);
    int n[x];
    printf("Entre The Numbers One by one.\n");
    for (i=1;i<=x;i++)
    {
        scanf("%d",&n[i]);
        sum = sum + n[i];
    }

    printf("Sum = %d\n",sum);
    printf("Avarage = %.3f",(float)sum/x);

    return 0;
}