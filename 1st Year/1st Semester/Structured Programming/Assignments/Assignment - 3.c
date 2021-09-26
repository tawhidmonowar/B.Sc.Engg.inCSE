#include <stdio.h>

int main(void)
{
    int i,j,n;

    printf("Enter The Value of N: ");
    scanf("%d",&n);
    printf("\n");

    for (i=1;i<=n;i++)
    {
        printf("%d,",i);
    }

    printf("\n\n");

    for (i=n;i>0;i--)
    {
        printf("%d,",i);
    }

    printf("\n\n");

    for (i=1;i<=n;i++)
    {
        printf("%d,",i=i+1);
    }

     printf("\n\n");

    for (i=0;i<n;i++)
    {
        printf("%d,",i=i+1);
    }

    printf("\n\n");

    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}