#include "stdio.h"
 
int main()
{
	int a = 3,b =4 ,c =5;
	float x = 1.2,y = 2.4,z = -3.6;
	int u = 51274,n = 128765;
	char c1 = 'a',c2 = 'b';
	
	printf("a=%-4db=%-4dc=%d\n",a,b,c);//使用%-4d作为格式控制，使数字左对齐
	printf("x=%.5f,y=%.6f,z=%.6f\n",x,y,z);
	printf("x+y=%.2f  y+z=%.2f  z+x=%.2f\n",x+y,y+z,x+z);
	printf("u=%-8dn=%9d\n",u,n);
	printf("c1 = '%c' or %d\n",c1,c1);
	printf("c2 = '%c' or %d\n",c2,c2);	
}
