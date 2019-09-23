#include<stdio.h>
int main()
{
	int n,p,q;
	printf("enter the number");
	scanf("%d",&n);
	p=n%10;
	n=n/10;
	q=n%10;
	n=n/10;
	n=n*100+p*10+q;
	printf("output=%d",n);
	return 0;
}


