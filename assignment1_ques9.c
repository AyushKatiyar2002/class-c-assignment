#include<stdio.h>
int main()
{
	int n,a;
	printf("enter the number\n");
	scanf("%d",&n);
	a=n%10;
	n=n/100;
	n=(n*10)+a;
	printf(" new_number after deletion=%d",n);
	return 0;
}

