/* WAP that takes two operands and one operator from the user and perform the operation and 
prints the result by using Switch statement. */

#include<stdio.h>

int main()
{
	int a, b, c;
	char cha;
	
	printf("Enter any operator (+,-,* or /) \n");
	scanf("%c", &cha);
	
	
	printf("Enter the value of a and b: \n");
	scanf("%d%d", &a, &b);
	

	switch(cha)
	{
		case '+' : c = a + b;
		printf("Addition of a and b : %d", c);
		break;
		
		case '-': c = a - b;
		printf("Substraction of a and b : %d", c);
		break;
		
		case '*': c = a * b;
		printf("Multiplication of a and b : %d", c);
		break;
		
		case '/': c = a / b;
		printf("Addition of a and b : %d", c);
		break;
		
		default: printf("Enter the valid operand");
	}
	
	getch();
	
	return 0;
	

	
	
	
	
}

