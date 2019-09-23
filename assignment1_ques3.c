#include<stdio.h>
int main()
	{
		int a,b,c,p,f;
		printf("enter the values of a,b,c and p\n");
		scanf("%d%d%d%d",&a,&b,&c,&p);
		f=(a*(p*p))+(b*p)+c;
		printf(" \nThe value of function at %d is %d",p,f);
		return 0;
	}

