#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i,n,r;
    scanf("%d",&n);
    int arrayMain[n];
    bool x = false;

    for(i=0; i<n; i++)
    {
        scanf("%d",&arrayMain[i]);
    }

    for(i=0; i<n-1; i++)
    {
        r = abs(arrayMain[i]-arrayMain[i+1]);
        if(r==0||r>n-1)
        {
            x = true;
            break;
        }else
        {
            x = false;
        }
    }

    if(x==true)
    {
        printf("Not jolly");
    }else
    {
        printf("Jolly");
    }

    return 0;
}
