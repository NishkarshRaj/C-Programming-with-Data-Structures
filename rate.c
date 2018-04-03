#include<stdio.h>
int main()
{
	float amount,rate; int qty;
	printf("Enter the quantity and amount\n");
	scanf("%d%f",&qty,&amount);
	rate=qty*amount;
	if(rate>1000)
	{
		rate=rate-(rate*0.1);
	}
	printf("%f",rate);
	return 0;
}
