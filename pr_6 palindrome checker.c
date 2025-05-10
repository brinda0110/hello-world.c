# include<stdio.h>

int main()
{
	char arr[100];
	int a=1,length;
    printf("Enter any string:");
	gets(arr);

   length=strlen(arr);
	
	for(int i = 0; i <length/2; i++) 
	{
        if(arr[i] != arr[length - i - 1]) 
		{
            a=0;
        }
    }
    if(a)
	{
         printf("The given string is a Palindrome\n");
     }
     else
     {
     	printf("The given string is not a Palindrome\n");
	 }
   
}
/*output:
Enter any string:nayan
The given string is a Palindrome

Enter any string:random
The given string is not a Palindrome
*/