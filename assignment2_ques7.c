#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,p,q,r,x,y;
	printf("enter constans\n");
	scanf("%f%f%f%f%f%f",&a,&b,&c,&p,&q,&r);
	x=(b*r-q*c)/(a*q-p*b);
	y=(c*p-r*a)/(a*q-p*b);
	printf("intersection point is=(%.1f,%.1f)",x,y);
	return 0;
}

