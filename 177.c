#include <stdio.h>
 
void main()
{
  int i,s; 
   

  scanf("%d", &s);
 

  for (i = 1; i <= s; i++)
   {
     if(s%i == 0)
        {
		 printf(" %d  ", i);
		}
   }
 
}
