#include<stdio.h>
int main()
{
	int a,b;
	for(a=1;a<=5;a++)
	{
		for(b=a;b<=5;b++)
		{
			printf("%d",b);
		}
		printf("\n");
	}
}
    /* output:12345
              2345
              345
              45
              5*/