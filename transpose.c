#include<stdio.h>
int main()
{
	int ra = 3,ca = 3;
	printf("Enter number of rows in A: ");
	scanf("%d",&ra);
	printf("Enter number of columns in A: ");
	scanf("%d",&ca);
	int a[ra][ca];
	for(int i = 0;i<ra;i++){
		for(int j = 0;j<ca;j++){
			printf("Enter the value for row %d and column %d: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = 0;i<ra;i++){
		for(int j = 0;j<ca;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	printf("The transpose of matrix A is: \n");
	for(int j = 0;j<ca;j++){
		for(int i = 0;i<ra;i++)
		       printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}

