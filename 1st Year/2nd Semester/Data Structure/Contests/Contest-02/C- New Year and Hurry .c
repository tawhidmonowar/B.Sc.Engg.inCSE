#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d %d", &y, &x);
    int i,m=60,t=4*m,s=0;

    t=t-x;

    for(i = 1; i <= y; i++) {
        if(t - 5*i >= 0) {
            t = t - 5*i;
            s++;
        } else {
            break;
        }
    }

    printf("%d\n", s);
    return 0;
}