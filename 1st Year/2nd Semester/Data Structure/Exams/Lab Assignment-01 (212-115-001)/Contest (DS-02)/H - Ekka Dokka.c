#include <stdio.h>

int main()
{
    int t,cs;
    long long w;
    long long x;
    long long y;

    scanf("%d", &t);

    for (cs = 1; cs <= t; cs++) {
        scanf("%lld", &w);
        if(w % 2 != 0) {
            printf("Case %d: Impossible\n", cs);
            continue;
        }

        x = w / 2;
        y = 2;

        while(x % 2 == 0) {
            x = x / 2;
            y = y * 2;
        }

        printf("Case %d: %lld %lld\n",cs, x, y);

    }
}

