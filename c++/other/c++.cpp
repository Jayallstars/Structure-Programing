#include <stdio.h>
	int main()
	{
		int score;
		printf("Enter Score = ");
		scanf("%d",&score);
		if(score>=80){printf("Grade = A");}
		else if(score>=75){printf("Grade B+");}
		else if(score>=70){printf("Grade B");}
		else if(score>=65){printf("Grade C+");}
		else if(score>=60){printf("Grade C");}
		else if(score>=55){printf("Grade D+");}
		else if(score>=50){printf("Grade D");}
		else{printf("Grade F");}
	}