#include<stdio.h>
void main()
{
	int n,i,a,b,s;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=pow(2,i);
		if(a>n)
		{
			b=i;
			break;
		}
	}
	s=pow(2,b);
	printf("\n%d",s);
	
	
}
