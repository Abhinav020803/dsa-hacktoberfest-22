/* WAP that checks that checks whether the two number entered by the user are equal or not */

#include<stdio.h>
main ()
{
	int a,b;
	printf("Enter a = ");
	scanf("%d", &a);
	printf("Enter b = ");
	scanf("%d", &b);
	
	if(a == b){
		printf("\n a and b are equal.");
	}
	else{
		printf("\n a and b are not equal.");
	}
	
	return 0;
}
