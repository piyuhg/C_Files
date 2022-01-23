#include<stdio.h>
int main()
{
	int a,b,c,d,e,avg;
	char grade;
	printf("Enter the marks of 1st subject: ");
	scanf("%d",&a);
	printf("Enter the marks of 2nd subject: ");
	scanf("%d",&b);
	printf("Enter the marks of 3rd subject: ");
	scanf("%d",&c);
	printf("Enter the marks of 4th subject: ");
	scanf("%d",&d);
	printf("Enter the marks of 5th subject: ");
	scanf("%d",&e);
	avg = (a+b+c+d+e)/5;
	if (avg >=90)
		grade = 'A';
	else if (avg >=80)
		grade = 'B';
	else if (avg >=70)
		grade = 'C';
	else if (avg >=60)
		grade = 'D';
	else if (avg >=50)
		grade = 'E';
	else
		grade = 'F';
	switch (grade)
	{
		case 'A': printf("Remark: Excellent Performance, Grade = %c\n",grade);
		break;
		case 'B': printf("Remark: Very Good Performance, Grade = %c\n",grade);
		break;
		case 'C': printf("Remark: Good Performance, Grade = %c\n",grade);
		break;
		case 'D': printf("Remark: Average Performance, Grade = %c\n",grade);
		break;
		case 'E': printf("Remark: Poor Performance, Grade = %c\n",grade);
		break;
		case 'F': printf("Remark: Very Poor Performance, Grade = %c\n",grade);
		break;
		default : printf("You have got very bad marks\n");
		break;
	}
	return 0;
}
