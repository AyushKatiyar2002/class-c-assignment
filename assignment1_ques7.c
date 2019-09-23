#include<stdio.h>
int main()
{
	int a,b,c,sum=0;
	printf("enter the number\n");
	scanf("%d",&a);
	b=a%10;
	a=a/10;
	c=a%10;
	sum=b+c;
	printf("sum of last two digit is %d \n",sum);
	return 0;
}

