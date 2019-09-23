#include<stdio.h>
int  main()
{
	int a,b;
	printf("enter the number\n");
	scanf("%d",&a);
	a=a/10;
	b=a%10;
	printf("second last digit=%d",b);
	return 0;
}

