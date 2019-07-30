#include<stdio.h>

int main(){
	char c;
	printf("Enter a character value: ");
	scanf("%c",&c);
	if(c>=48 && c<=57)
		printf("The character is an Integer");
	else if(c>=65 && c<=90)
		printf("The character is an Uppercase Alphabet");
	else if(c>=97 && c<=122)
		printf("The character is an Lowercase Alphabet");
	else
		printf("The character is a special character");		
	return 0;
}
