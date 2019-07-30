#include<stdio.h>
//using flag
int main(){
	int num,i,flag = 0;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(i =2; i<num/2;i++){
		if(num%i==0){
			flag = 1;
			break;
		}
	}
	if(flag==1)
		printf("The number is Not Prime!!\n");
	else
		printf("The number is Prime!!\n");
	return 0;
}
