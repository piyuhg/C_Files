#include<stdio.h>

int main(){
	int num, mun = 0, rem,i;
	printf("Enter the number: ");
	scanf("%d",&num);
	for(i = num;i>0;i = i/10){
		rem = i%10;
		mun = mun*10 + rem;
	}
	if(mun==num)
		printf("The number is Palindrome");
	else
		printf("The number is Not Palindrome");
	return 0;
}
