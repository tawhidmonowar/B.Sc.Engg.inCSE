#include<stdio.h>
int main(){

	int i,n,x[100];

	x[1]=1;
	x[2]=2;

	for(i=3;i<=50;i++)
    {
        x[i]=x[i-1]+x[i-2];
    }

	while(scanf("%d",&n)==1&&n!=0){
		printf("%d\n",x[n]);
	}

	return 0;
}