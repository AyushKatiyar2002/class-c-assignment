#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e,dis;
	printf("enter the coods of point\n");
	scanf("%f%f",&a,&b);
	printf("enter c,d,e");
	scanf("%f%f%f",&c,&d,&e);
	dis=(a*c+b*d+e)/(sqrt(c*c+d*d));
	printf("distance is=%f",dis);
	return 0;

}


