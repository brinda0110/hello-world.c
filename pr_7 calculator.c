#include<stdio.h>
void brinda()
{
	int a,b,choice;
    printf("press.1 for +\n");
	printf("press.2 for -\n");
	printf("press.3 for *\n");
	printf("press.4 for /\n");
	printf("press.5 for %\n");
	printf("press.0 for the exit\n");
	printf("enter your choice:");
	scanf("%d",&choice);
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);

	switch (choice)
	{
		case 1:
		printf("add of a & b :%d",a+b);
		break;
		case 2:
		printf("sub of a & b :%d",a-b);
		break;
		case 3:
		printf("multiply of a & b :%d",a*b);
		break;
		case 4:
		printf("div of a & b :%d",a/b);
		break;
		case 5:
		printf("per of a & b :%d",a%b);
		break;
		case 6:
		printf("the exit ");
		break;
	}
}
int main()
{ for(int i=0;i<3;i++)
	{
	brinda();
	}
}

/* output:
press.1 for +
press.2 for -
press.3 for *
press.4 for /
press.5 for
press.0 for the exit
enter your choice:1
Enter the first number:5
Enter the second number:3
add of a & b :8


press.1 for +
press.2 for -
press.3 for *
press.4 for /
press.5 for
press.0 for the exit
enter your choice:4
Enter the first number:10
Enter the second number:5
div of a & b :2


press.1 for +
press.2 for -
press.3 for *
press.4 for /
press.5 for
press.0 for the exit
enter your choice:0
Enter the first number:1
Enter the second number:2  */


