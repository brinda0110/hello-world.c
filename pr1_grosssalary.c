#include<stdio.h>

int main()
{
	int basesalary;
	float HRA,DA,TA,grosssalary;
	printf("basesalary:");
	scanf("%d",&basesalary);
	printf("HRA:");
	scanf("%f",&HRA);
	printf("DA:");
	scanf("%f",&DA);
	printf("TA:");
	scanf("%f",&TA);
	grosssalary = basesalary+HRA*basesalary/100	+DA*basesalary/100+TA*basesalary/100;
	printf("grosssalary:RS %f",grosssalary);
	scanf("%f",grosssalary);	
}