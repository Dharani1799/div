#include <stdio.h>

void main() {
	int n,m,prod,i,p,f=0;
	scanf("%d %d",&n,&m);
	prod=m*n;
	for(i=1;i<=prod/2;i++)
	{
		p=i*i;
		if(p==prod)
		{
			printf("yes");
			f=1;
			break;
		}
		
		
	}
	if(f==0)
	printf("no");
	
}
