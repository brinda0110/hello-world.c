#include <stdio.h>
int main()
{
	int array[3][3];
	for(int i=0;i<3;i++)
	{
	   for(int j=0;j<3;j++)
	    {
		 printf(" arr[%d][%d]: ",i,j);
		 scanf("%d",&array[i][j]);
		 }
    }
		
int largest=array[0][0];
		
	for(int i=0;i<3;i++)
	{
	   for(int j=0;j<3;j++)
	    {	
		  if(array[i][j]>largest)
		   {
		 	largest = array[i][j];
		   }
		
	    }
	} 

          printf("the largest element is: %d",largest);
	    	

}
/* output:
 arr[0][0]: 1
 arr[0][1]: 2
 arr[0][2]: 3
 arr[1][0]: 4
 arr[1][1]: 5
 arr[1][2]: 6
 arr[2][0]: 7
 arr[2][1]: 8
 arr[2][2]: 9
the largest element is: 9 */


	
