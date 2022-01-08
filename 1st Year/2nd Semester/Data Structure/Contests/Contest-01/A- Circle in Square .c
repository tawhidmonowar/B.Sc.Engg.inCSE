#include <stdio.h>
#include <math.h>

int main()
{
    int t,i;
	double x;
	double y;
	double z;
	double a;

	scanf("%d",&t);

	for (i = 1; i<= t; i++) {
		scanf("%lf", &x);
		z = 2 * acos(0.0) * x * x;
		y = (2 * x) * (2 * x);
		a = y - z;
		printf("Case %d: %.2lf\n",i, a);
	}
}