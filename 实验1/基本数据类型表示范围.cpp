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
	Q1:chΪchar�����ݣ����λΪ����λ
	Q2:��15�� printf("ch = %d\n",ch); ���ʱ��ch����ǿ������ת����������Ϊprintf("ch = %d\n",(unsigned char)ch);
	Q3:??? 
*/	
 } 
