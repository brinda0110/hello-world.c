#include <stdio.h>
int main()
{
	int num ,sum=0 ,a,b,c ;
	printf("enter any number:");
	scanf("%d",&num);
	b=num%10;
	while(num>=10)
	{
	 num=num/10;
    }
	a=num;
    c=a+b;
	printf("\nthe sum of first and last digit:%d", c);
} 
/* output: enter any number:1234

the sum of first and last digit:5
*/