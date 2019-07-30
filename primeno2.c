#include<stdio.h>
//using return 0
int main(){
	int num,i;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(i =2; i<num/2;i++){
		if(num%i==0){
			printf("The number is Not Prime!!\n");
			return 0;
		}
	}
	printf("The number is Prime!!\n");
	return 0;
}
