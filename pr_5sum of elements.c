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

  for(int i=0; i<3; i++)   
    {
        int rowsum=0;
        for(int j=0; j<3; j++)
        {
            rowsum = rowsum + array[i][j] ;
        }
        printf( " \n Sum of row %d = %d \n ", i, rowsum);
    }

    
		for( int i=0; i<3; i++ )
    {
        int colsum=0;
        for( int j=0; j<3; j++ )
        {
            colsum = colsum+array[j][i] ;
        }
        printf( " \n  sum of column %d = %d\n ", i, colsum );
    }
}


/*output:
 arr[0][0]: 2
 arr[0][1]: 7
 arr[0][2]: 1
 arr[1][0]: 3
 arr[1][1]: 5
 arr[1][2]: 4
 arr[2][0]: 8
 arr[2][1]: 9
 arr[2][2]: 6

Sum of row 0 = 10

Sum of row 1 = 12

Sum of row 2 = 23

sum of column 0 = 13

sum of column 1 = 21

sum of column 2 = 11*/
