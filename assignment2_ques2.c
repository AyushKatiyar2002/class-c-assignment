#include<stdio.h>
#include<math.h>
int main()
{
	int x1,y1,x2,y2;
	float dis;
	printf("enter coordinates of two points");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	dis=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	printf("distance between points is=%f",dis);
	return 0;
}


