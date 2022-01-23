#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	int i ,j,k;
	i = 1;
	while(i<=num)
	{
		k = 1;
		while(k<i)
		{
			printf(" ");
			k++;
		}
		j = i;
		while(j <=num)
		{
			printf("*");
			j++;
		}
		i++;
		printf("\n");
	}
	return 0;
}
