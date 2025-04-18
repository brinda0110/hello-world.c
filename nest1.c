# include <stdio.h>
int main()
{
	int a=1 ,b=10 ,c=5 ;
	if(a>b)
	{
		if(c>b)
	{
			printf("b is min");
	}
	else{printf("c is Min");}
	}
	else{
		if(c>a){
			printf("a is Min");	}
		else{ printf("c is min");
		}
	}
}