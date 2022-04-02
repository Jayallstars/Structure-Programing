#include <stdio.h>
main(){
	int x,n;
	int sum = 0;
	printf("Enter your number : ");
	scanf("%d", &x);
	// reverse condition
	while (x>0){
		n = x%10;
		sum = sum*10+n;
		x = x/10;		
	}
	printf("Your reverse number is : %d", sum);
}
