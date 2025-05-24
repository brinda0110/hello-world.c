//Write a C program that prompts the user to enter a 3 digit's positive integer. Find the sum of first and last digit.
#include <stdio.h>
int main()
{
	int num ,sum=0 ,x,y,z;
	printf("enter any number:");
	scanf("%d",&num);
	y=num%10;
	while(num>10)
	{
	 num=num/10;
    }
	x=num;
    z=x+y;
	printf("\nthe sum of first and last digit:%d", z);
} 
/*output:
enter any number:123

the sum of first and last digit:4
*/