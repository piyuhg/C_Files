#include<stdio.h>

int main(){
	char in;
	printf("Enter an alphabet: ");
	scanf("%c",&in);
	char c = toupper(in);
	if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
		printf("The entered alphabet '%c' is a VOWEL",in);
	else
		printf("The entered alphabet '%c' is a CONSONANT",in);
	return 0;
}
