#include <stdio.h>

int main()
{
    int i, n, m, r, x, a[105];
    scanf("%d %d", &n, &m);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    r = 1;
    x = m;

    for(i = 0; i < n;) {
        if(a[i] <= x) {
            x -= a[i];
            i ++;
        } else {
            x = m;
            r ++;
        }
    }
    printf("%d\n", r);
}
