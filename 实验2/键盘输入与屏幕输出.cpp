#include "stdio.h"

int main()
{
	int a,b;
	float x,y;
	char c1,c2;
	scanf("a=%d,b=%d,",&a,&b);
	scanf("x=%f,y=%e,",&x,&y);
	scanf("c1=%c,c2=%c",&c1,&c2);
	
	printf("a = %d,b = %d\n",a,b);
	printf("x = %f y = %e\n",x,y);
	printf("c1 = %c c2 = %c",c1,c2);
 } 
