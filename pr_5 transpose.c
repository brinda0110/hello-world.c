#include <stdio.h>

int main() 
{
  int array[3][3]  ;
 for (int i = 0; i < 3; i++)
{
       for (int j = 0; j < 3; j++) 
	{
     
        printf("enter array[%d][%d]:",i,j);
        scanf("%d",&array[i][j]);
		
	}
}

int transpose[3][3];
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = array[i][j];
        }
    }

   	for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", transpose[j][i]);
        }
        printf("\n"); 
        
    } printf("\n"); 
    
    printf("Transpose of an array:\n"); 
    
	
	for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");}


}
/*output:
enter array[0][0]:2
enter array[0][1]:4
enter array[0][2]:1
enter array[1][0]:3
enter array[1][1]:5
enter array[1][2]:4
enter array[2][0]:8
enter array[2][1]:2
enter array[2][2]:6
2 4 1
3 5 4
8 2 6

Transpose of an array:
2 3 8
4 5 2
1 4 6*/
