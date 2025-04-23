#include<stdio.h>

int main()
{
	int score , choice;
	printf("score of student:");
	scanf("%d",&score); 
	
 score>=90?printf("grade A."):
 75<=score && score<90 ?printf("grade B."):
 60<=score && score<75?printf("grade C."):
 45<=score && score<60?printf("grade D."):
 35<=score && score<45?printf("grade E."):printf("grade F."); 
 
 printf("\npress 1.EXCELLENT WORK!\n");
 printf("press 2.WELL DONE!\n");
 printf("press 3.GOOD JOB!\n");
 printf("press 4.YOU PASSED,BUT YOU COULD DO BETTER!\n");
 printf("press 5.PASSED!\n");
 printf("press 6.SORRY,YOU FAILED!\n");
 printf("enter your choice:");
 scanf("%d",&choice);

 switch(choice)
 {
 	case 1:
 		printf(" YOUR GRADE IS A.EXCELLENT WORK!" );
 		break;
 	case 2:
 		printf("YOUR GRADE IS B.WELL DONE!");
 		break;
 	case 3:
 		printf("YOUR GRADE IS C.GOOD JOB!");
 		break;
 	case 4:
 		printf(" YOUR GRADE IS D.YOU PASSED ,BUT YOU COULD DO BETTER!");
 		break;
 	case 5:
 		printf("YOUR GRADE IS E.PASSED!");
 		break;
 	case 6:
 		printf("YOUR GRADE IS F.SORRY,YOU FAILED!");
 		break;
    default :
 		printf("invalid score!");
 		break;
}
if(35<score && score<=100)
{
	printf("congratulation!you are eligible for the next level");
}
else
{
	printf("please try again next time");
}
}
/* output: 
YOUR GRADE IS B.WELL DONE!congratulation!you are eligible for the next level
OUTPUT:
YOUR GRADE IS F.SORRY,YOU FAILED!please try again next time
*/
 
