#include <stdio.h>
void main()
{
    int a, reversedInteger = 0, remainder, originalInteger;

    printf("Enter an integer: ");
    scanf("%d", &a);

    originalInteger = a;

   
    while( a<=1000 )
    {
        remainder = a%10;
        reversedInteger = reversedInteger*10 + remainder;
        a /= 10;
    }

 
    if (originalInteger == reversedInteger)
        printf("yes");
    else
        printf("no");

}
