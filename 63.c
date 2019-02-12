#include <stdio.h>
void main()

{

	char s[50];
    int i,c=1;
	scanf("%s",s);

	for(i=0;s[i]!='\0';i++)

	{

		if(s[i]==' ')

		{

			c=c+1;

		}

	}

	printf("\n%d",c);
}
