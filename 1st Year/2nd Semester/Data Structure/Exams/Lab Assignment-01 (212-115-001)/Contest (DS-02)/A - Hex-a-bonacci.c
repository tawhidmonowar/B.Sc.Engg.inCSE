#include <stdio.h>
int main()
    {
    long long int a, b, c, d, e, f;
    long long int arr[10000], m;
    int n, i = 0, cases;
    scanf("%lld", &cases);
    while( cases-- )
    {
        scanf("%lld %lld %lld %lld %lld %lld %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &n);
        for(m=6; m<=n; m++)
            arr[m]=(arr[m-1]+arr[m-2]+arr[m-3]+arr[m-4]+arr[m-5]+arr[m-6])%10000007;

        printf("Case %d: %lld\n", ++i, arr[n]  % 10000007);
    }
    return 0;
}