#include <stdio.h>
#include <stdlib.h>

int main() {
    int t,x=1,a,b,c;
    scanf("%d",&t);
    while(t--) {
        scanf("%d %d %d",&a,&b,&c);
        if(a<21&&b<21&&c<21)
        {
            printf("Case %d: good\n",x++);
        }else{
            printf("Case %d: bad\n",x++);
        }

    }
    return 0;
}