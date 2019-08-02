#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	printf("Enter the string:");
	scanf("%[^\n]s",&str);
	int len = strlen(str);
	char rts[100];
	strcpy(rts,str);
	int i,j;
	for(i = 0,j=len-1;i<j;i++,j--){
		char temp = rts[i];
		rts[i] = rts[j];
		rts[j] = temp;
	}
	int equal = strcmp(str,rts);
	if(equal==0)
		printf("\nPalindrome String");
	else
		printf("\nNot Palindrome");
	return 0;
}
