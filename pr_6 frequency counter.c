#include<stdio.h> 

int main()
{
   
    char arr[100] ="development";
    int i ,frequency[256] ={0};
     
    for(i=0; arr[i] !='\0'; i++)
    {
        frequency[arr[i]]++;
    }
    
    
    for(i=0; i<256; i++)
    {
        if(frequency[i]!= 0)
        {
            printf(" %c = %d\n", i, frequency[i]);
        }
    }
  
}

/*
output:
 d = 1
 e = 3
 l = 1
 m = 1
 n = 1
 o = 1
 p = 1
 t = 1
 v = 1
*/