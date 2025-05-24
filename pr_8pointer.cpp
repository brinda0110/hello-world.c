#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
	char*p;
	p=&a[50];
	printf("enter any string:");
	gets(a);
	printf("length of string=>%d\n",strlen(a),*p);

}

/*output:
enter any string:hello world
length of string=>11
*/