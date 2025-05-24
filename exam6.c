// Develop a C program that uses a structure to represent a mobile (with attributes like company_name, color, model, and price). List N number of mobiles' details using Array of objects.
#include<stdio.h>
#include<string.h>
struct mobile
{
	char companyname[50];
	char color[50];
	char model[50];
	int price;
 };
	
	int main()
	{ 
	  int i;
	  struct mobile m[i];
	  for(i=0;i<6;i++)
	 {
   	 printf("mobile :%d\n ",i+1);
	 printf("company name:");
	 scanf("%s",&m[i].companyname);
	 gets(m[i].companyname);
	 printf("color:");
	 scanf("%s",&m[i].color);
	 printf("model:");
	 scanf("%s",&m[i].model);
	 printf("price:");
	 scanf("%d",&m[i].price);
     printf("companyname:%s\n color:%s\n model:%s\n price:%d\n ",m[i].companyname,m[i].color,m[i].model,m[i].price);
	 printf("\n");}
	
	
}
/*output:
mobile :1
 company name:iphone
 color:black
 model:iphone13
 price:40000
companyname:iphone
 color:black
 model:iphone13
 price:40000
 
 mobile :2
 company name:apple
color:titanium
model:iphone15
price:90000
companyname:
 color:titanium
 model:iphone15
 price:90000

mobile :3
 company name:samsung
color:blue
model:samsungs25
price:90000
companyname:
 color:blue
 model:samsungs25
 price:90000
 */
