/* WAP to accept the marks of 5 subjects and fing the sum and percentage marks obtained by the student */
#include<stdio.h>
void main()
{
	int hindi, english, science,math,computer,sum ;
	float per;
	printf("Enter marks of Hindi=");
	scanf("%d",&hindi);
	printf("Enter marks of English=");
	scanf("%d",&english);
	printf("Enter marks of Science=");
	scanf("%d",&science);
	printf("Enter marks of Math=");
	scanf("%d",&math);
	printf("Enter marks of Computer=");
	scanf("%d",&computer);
	
	sum=hindi+english+science+math+computer;
	printf("Sum of marks=%d",sum);
	
	per=(float)sum/5;
	printf("Percentage of marks=%f",per);
}

	


