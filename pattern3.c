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
		k = num-i;
		while(k>0)
		{
			printf(" ");
			k--;
		}
		j = 1;
		while(j <=i)
		{
			printf("*");
			j++;
		}
		i++;
		printf("\n");
	}
	return 0;
}
