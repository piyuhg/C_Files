#include<stdio.h>

int main(){
	int num, mun = 0, rem;
	printf("Enter the number: ");
	scanf("%d",&num);
	int i;
	for(i = num;i>0;i = i/10){
		rem = i%10;
		mun = mun*10 + rem;
	}
	printf("\n%d ",mun);
}
