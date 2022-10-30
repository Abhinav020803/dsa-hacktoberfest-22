/* WAP  to find greatest of three numbers. */

#include<stdio.h>
main()
{
	int num1, num2, num3;
	//Ask user to input any three integer value
	printf("\n Enter value of num1, num2 and num3 :");
	scanf("%d %d %d ", &num1, &num2,  &num3);
	
	if((num1>num2)&&(num1>num3))
	printf("\n Number1 is largest");
	
	else if((num2>num1)&&(num2>num3))
		printf("\n Number2 is largest");
		
    else
    printf("\n Number3 is largest");
    
    return 0;
}
