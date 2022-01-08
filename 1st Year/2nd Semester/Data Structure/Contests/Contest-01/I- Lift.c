#include <stdio.h>

int main()
{
    int i,m,l,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&m,&l);
        printf("Case %d: %d\n",i,l*4+19);
    }

    return 0;
}
