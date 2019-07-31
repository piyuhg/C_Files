#include<stdio.h>

int main(){
	int i,j;
//	1
//	12
//	123
//	1234
//	12345
	for(i = 1;i<=5;i++){
		for(j = 1;j<=i;j++)
			printf("%d",j);
		printf("\n");
	}
	
	printf("-------\n");
//	12345
//	1234
//	123
//	12
//	1
	for(i = 5;i>=1;i--){
		for(j = 1;j<=i;j++)
			printf("%d",j);
		printf("\n");
	}
	
	printf("-------\n");
	
//	1
//	22
//	333
//	4444
//	55555
	for(i = 1;i<=5;i++){
		for(j = i;j>=1;j--)
			printf("%d",i);
		printf("\n");
	}
	
	printf("-------\n");
	
//	1
//	21
//	321
//	4321
//	54321
	for(i = 1;i<=5;i++){
		for(j = i;j>=1;j--)
			printf("%d",j);
		printf("\n");
	}
	
	printf("-------\n");
	
//	5
//	54
//	543
//	5432
//	54321
	for(i = 5;i>=1;i--){
		for(j = 5;j>=i;j--)
			printf("%d",j);
		printf("\n");
	}
	
	printf("-------\n");
	
//	54321
//	5432
//	543
//	54
//	5
	for(i = 1;i<=5;i++){
		for(j = 5;j>=i;j--)
			printf("%d",j);
		printf("\n");
	}

}
