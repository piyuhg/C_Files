#include<stdio.h>

int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int first = 0, second = 1;
	int i;
	printf("%d ",first);
	for(i = 1;i<=n;i++){
		printf("%d ",second);
		int next = first + second;
		first = second;
		second = next;
	}
	return 0;
}
