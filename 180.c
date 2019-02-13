#include<stdio.h> 

void main(){
   int n,r,odd=0,digit;

            

            scanf("%d",&n);

          

            while(n>0){

           digit = n % 10;

            n = n / 10;

           r = digit % 2;
if(r != 0)

           printf("\t  %d",digit);

            }

         

    } 
