#include <stdio.h>

void main() 
{
	int a;

	scanf("%d",&a);
	a+=1;
	while(a%10!=0)
	{
		a=a+1;
	}
	printf("\n%d",a);
	
}
