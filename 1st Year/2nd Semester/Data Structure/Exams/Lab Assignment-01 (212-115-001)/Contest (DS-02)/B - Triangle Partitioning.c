#include<stdio.h>
#include<math.h>

int main()
{
    double ab,ac,bc,de,r,x,ad;
    int t,i;
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf%lf%lf",&ab,&ac,&bc,&r);
        x=(r/(r+1));
        ad=ab*(sqrt(x));
        printf("Case %d: %f\n",i,ad);
    }

}
