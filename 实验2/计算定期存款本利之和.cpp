#include "stdio.h"

int main()
{
	float rate = 2.25/100;
	int n;
	int capital;
	printf("input n:");
	scanf("%d",&n);
	printf("\ninput capital:");
	scanf("%d",&capital);
	printf("\ndeposit = %.2f\n",capital + capital * n * rate); 
}
