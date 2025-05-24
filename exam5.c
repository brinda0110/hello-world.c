//Write a C program that uses pointers to find the sum of two 1D array
#include<stdio.h>
int main()
{
    int a1[50];
	int*p1;
	p1=&a1;
	printf("enter a1:");
    scanf("%d",&a1);
    printf("p1=>%d\n",*p1,a1);
    
    int a2[50];
    int*p2;
    p2=&a2;
    printf("enter a2:");
    scanf("%d",&a2);
    printf("p2=>%d\n",*p2,a2);
    
    int *p3;
    int a3=*p1+*p2;
    p3=&a3;
    printf("a1+a2=%d\n",*p3,a3);
   
	
}
/*output:
enter a1:12
p1=>12
enter a2:12
p2=>12
a1+a2=24
*/