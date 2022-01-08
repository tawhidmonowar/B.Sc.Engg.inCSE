#include<stdio.h>
int main()
{
    int i,x,y,z,t,s;

    scanf("%d", &t);

    for(i = 1; i <=t; i++) {
        scanf("%d%d%d",&x,&y,&z);
        s = x+y+z;
        printf("Case %d: Sum of %d, %d and %d is %d\n",i,x,y,z,s);
    }

    return 0;
}