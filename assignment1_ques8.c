#include<stdio.h>

int main()
{
	int n,a;
	printf("enter the number\n");
	scanf("%d",&n);
	a=n%10;
	n=n/10;
	n=(n*10)+(a*2);
	printf("output=%d",n);
	return 0;
}

