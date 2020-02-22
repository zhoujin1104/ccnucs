#include <stdio.h>

int main()
{
	char ch1,ch2,ch;
	unsigned char c;
	int a;
	ch1 = 80;
	ch2 = 60;
	ch = ch1 + ch2;
	c = ch1 + ch2;
	a = ch1 + ch2;
	
	printf("ch1 + ch2 = %d\n",ch1+ch2);
	printf("ch = %d\n",ch);
	printf("c = %d\n",c);
	printf("a = %d\n",a);
	
/*
	Q1:ch为char型数据，最高位为符号位
	Q2:将15行 printf("ch = %d\n",ch); 输出时对ch进行强制类型转换，即更改为printf("ch = %d\n",(unsigned char)ch);
	Q3:??? 
*/	
 } 
