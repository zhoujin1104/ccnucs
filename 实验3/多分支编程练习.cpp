#include "stdio.h" 
#define USE_IF 0
#define USE_SWITCH 1 

int main()
{
	int x,y;
	printf("input x:");
	scanf("%d",&x);
	
	#if USE_IF == 1
	if(x < 0)
		y = 0;
	else if(x>=0&&x<10)
		y = x;
	else if(x>=10&&x<20)
		y = 10;
	else if(x>=20&&x<40)
		y = -0.5*x +20;
	#endif
	
	#if USE_SWITCH == 1
	int c = -1;
	y = 0;
	if(x>=0)
		c = x/10;
	switch(c){
		case 0: y = x;break;
		case 1: y = 10;break;
		case 2:;
		case 3:y = -0.5*x +20;break;
		default: break;
	}
	#endif
	
	printf("x = %d\n",x);
	printf("y = %d",y);
 } 
