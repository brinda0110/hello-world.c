#include <stdio.h>
int main()
{
	int array[5];
	for(int i=0;i<5;i++)
	{
	   
	    printf(" arr[%d]: ",i);
		scanf("%d",&array[i]);
		
	}
	for(int i=0;i<5;i++)
	{
	   if(array[i]<0)
		{
		printf("negative element from an array:%d",array[i]);
		}
		printf("\n");
	}
	
}
/*output:
 arr[0]: 2
 arr[1]: -4
 arr[2]: 1
 arr[3]: -3
 arr[4]: -5

negative element from an array:-4
negative element from an array:-3
negative element from an array:-5*/

	
			
		
		
	
