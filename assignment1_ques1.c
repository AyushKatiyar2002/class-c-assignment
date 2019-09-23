#include<stdio.h>

int main()
{
	float length,breadth,s,area;
	printf("enter sides of a rectangle");
	scanf("%f%f",&length,&breadth);
	area=length*breadth;
	printf("area=%.3f",area);
	return 0;
}

