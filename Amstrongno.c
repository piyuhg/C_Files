#include<stdio.h>
#include<math.h>
int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	int i, count = 0;
	for(i = num;i>0;i/=10)
		count++;
	int newNum = 0,rem;
	for(i = num;i>0;i/=10){
		rem = i%10;
		newNum += pow(rem,count);
	}	
	if(num == newNum)
		printf("%d is an Armstrong Number",num);
	else
		printf("%d is not an Armstrong Number",num);
	return 0;
}
