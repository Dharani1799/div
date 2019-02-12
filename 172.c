#include <stdio.h>

void main() 
{
char str[50];
int i=0,count=0,f=0;

scanf("%s",str);
while(str[i]!='\0')
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
f=1;
i++;
}
if(f==1)
{
	printf("\nyes");
}
else
{
	printf("\n no");
}
}
