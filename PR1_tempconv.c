#include<stdio.h>
int main()
{
	int celsius;
    float fahrenheit ;
    printf("the temperature in celsius:");
    scanf("%d",&celsius);
    fahrenheit = (1.8*celsius)+32;
    printf("the temperature in fahrenheit:%f",fahrenheit);
    scanf("%f",&fahrenheit);
    
}