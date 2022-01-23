#include<stdio.h>
int main()
{
	int arr[][2] = {{1,2},{3,4}};
	int ide[][2] = {{1,0},{0,1}};
	int rows = 2, cols = 2;
	for(int i = 0;i<rows;i++){
		for(int j = 0;j<cols;j++){
			printf("Enter the value for row %d and column %d: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i = 0;i<rows;i++){
		for(int j = 0;j<cols;j++){
			arr[i][j] = arr[i][j] + ide[i][j];
			printf(" %d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
