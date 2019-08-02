#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	printf("Enter the string:");
	//fgets(str,100,stdin); // when this is used, the length of string is 1 + actual length
	scanf("%[^\n]s",&str);
	int len = strlen(str);
	//len--; //when fgets is used, use this
	char rts[100];
	strcpy(rts,str);
	printf("The length of string is: %d",len);
	printf("\n%c",str[0]);
	printf("\n%c",str[len-1]);
	int i,j;
	for(i = 0,j=len-1;i<j;i++,j--){
		char temp = rts[i];
		rts[i] = rts[j];
		rts[j] = temp;
	}
	printf("\nThe reverse String is: %s",rts);
	return 0;
}
