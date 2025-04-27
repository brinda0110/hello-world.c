#include <stdio.h>
int main()
{
	int num ,rem ,sum=0;
	printf("enter any number:");
	scanf("%d",&num);
	while(num>0)
	{
	rem=num%10;
	printf("\nrem:%d",rem);
        num=num/10;
        sum++;
	}
	printf("\ntotal no of digit:%d", sum);
} 
/*output  : enter any number:13456

rem:6
rem:5
rem:4
rem:3
rem:1
total no of digit:5  
*/
