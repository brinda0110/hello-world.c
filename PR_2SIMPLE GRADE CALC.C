#include<stdio.h>

int main()
{
	int score ,choice ;
	printf("score of student:");
	scanf("%d",&score); 
	
 score>=90?printf("grade A"):
 75<score && score<90 ?printf("grade B"):
 60<score && score<75?printf("grade C"):
 45<score && score<60?printf("grade D"):
 35<score && score<45?printf("grade E"):("grade F");  
 
{
  printf("grade A");
 printf("grade B");
 printf("grade C");
 printf("grade D");
 printf("grade E"); 
 printf("grade F");
 scanf("%c", &choice);
 switch(choice)
 {
 	case 1:
 		printf("EXCELLENT WORK!", grade A);
 		break;
 	case 2:
 		printf("WELL DONE!", grade B);
 		break;
 	case 3:
 		printf("GOOD JOB!", grade C);
 		break;
 	case 4:
 		printf("YOU PASSED ,BUT YOU COULD DO BETTER!", grade D);
 		break;
 	case 5:
 		printf("PASSED!", grade E);
 		break;
 	case 6:
 		printf("SORRY,YOU FAILED!", grade F);
 		break;
    default :
 		printf("Excellent work!");
 		break;
}
}
}
 

