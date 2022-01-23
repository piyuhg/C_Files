#include<stdio.h>
int main()
{
	int ra = 3, ca = 2, rb = 2, cb = 3;
	printf("Enter number of rows in A: ");
	scanf("%d",&ra);
	printf("Enter number of columns in A: ");
	scanf("%d",&ca);
	printf("Enter number of rows in B: ");
	scanf("%d",&rb);
	printf("Enter number of columns in B: ");
	scanf("%d",&cb);
	int a[ra][ca], b[rb][cb];
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
	for(int i = 0;i<rb;i++){
		for(int j = 0;j<cb;j++){
			printf("Enter the value for row %d and column %d: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(int i = 0;i<rb;i++){
		for(int j = 0;j<cb;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}
	if(ca != rb){
		printf("Matrices are not of correct order for multiplication!!\n");
		return 0;
	}
	int rc = ra, cc = cb;
	int c[rc][cc];
	int sum;
	printf("\nProduct of matrices is: \n");
	for(int i = 0;i<rc;i++){
		for(int l = 0;l<cc;l++){
			int sum = 0;
			for(int j = 0;j<ca && j<rb;j++)
				sum = sum + a[i][j]*b[j][l];
		c[i][l] = sum;
		}
	}
	for(int i = 0;i<rc;i++){
                for(int j = 0;j<cc;j++)
                        printf("%d ",c[i][j]);
                printf("\n");
        }
	return 0;
}


