#include<stdio.h>
int main()
{
	int a,b;
	for(a=41;a<=45;a++)
	{
		for(b=41;b<=a;b++)
		{
			printf("%d ",b);
		}
		printf("\n");
	}
}
/* output:41
          41 42
          41 42 43
          41 42 43 44
          41 42 43 44 45*/