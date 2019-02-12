#include <stdio.h>
#include<string.h>
void main()
{
	char s[10];
	scanf("%s",s);

	int i,f=0,m;
	m=strlen(s);
	for(i=0;i<m;i++)
	{
		if(s[i]=='1' || s[i]=='0')
		{
			f=1;
		}
		else
		{
			f=0;
			break;
		}
		
	}
	if(f==1)
	{
		printf("yes");
	}
	else{
		printf("no");
	}
}
