#include<stdio.h>
int main()
{
	int angle1,angle2,angle3;
	printf("first angle:");
	scanf("%d",&angle1);
	printf("second angle:");
	scanf("%d",&angle2);
	angle3= 180-(angle1+angle2);
	printf("third angle:%d",angle3);
	scanf("%d",&angle3);
	
}