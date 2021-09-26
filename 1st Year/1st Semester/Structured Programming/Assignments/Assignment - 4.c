/*Author: Tawhid Monowar*/

#include<stdio.h>
int main()
{
    int i,j,k,n=1;

    for(i=1;i<=5;i++)
    {
        for(j=1,k=1;k<=15;j++,k++)
        {
            if(i==1||((i==3)&&(j<=5))||i==5||j==1||j==10||j==15)
            {
                if(j==6||j==11||(j==9)&&(i==3))
                {
                    printf("  ");
                }
                printf("*");
            }
            else
            {
                printf(" ");
            }

            if ((j==15)&&(i==2)||(j==15)&&(i==3)||(j==15)&&(i==4))
            {
                printf("    *");
            }
        }
     printf("\n");
    }

    return 0;
}