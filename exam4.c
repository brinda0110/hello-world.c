// Create a C program that defines a function to check if a given number is divisible by 3 and 5 both or not.
#include<stdio.h>
int main()
{
  int a,b=15;
  
  	printf("value of a:");
    scanf("%d",&a);
    
  if(a%b==0)
  {
  	printf("a is divisible by 5 and 3");
  }
  else
   {
	printf("a is not divisible by 5 and 3");
    }
} 

/*output:
value of a:165
a is divisible by 5 and 3 
*/