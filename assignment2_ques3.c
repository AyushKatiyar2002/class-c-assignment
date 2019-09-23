#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e,f;
	float area;
	printf("enter the coords of traingle\n");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	area=0.5*((a*(d-f))+(c*(f-b))+(e*(b-d)));
	printf("area=%f\n",area);
	return 0;
}


