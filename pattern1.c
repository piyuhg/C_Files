#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number of rows: ");
	scanf("%d",&num);
	int i = num;
	while(i>0)
	{
		int j = 1;
		while(j<=i){
			printf("* ");
			j++;
		}
		i--;
		printf("\n");
	}
	return 0;
}
