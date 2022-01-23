#include<stdio.h>
/*int strlen(char[] str){
	int i = 0;
	int len = 0;
	while(str[i] != '\0'){
		len++;
		i++;
	}
	return len;
}
char[] strcopy(char[] str1, char[] str2){
	str1 = '\0';
	int len2 = strlen2(str2);
	for(int i = 0; i<=len2;i++)
		str1[i] = str2[i];
	return str2;
}	
char[] strconcat(char[] str1, char[] str2){
	int i = 0;
	while(str2[i] != '\0'){
		str1 = str1 + str2[i];
		i++;
	}
	return str1;
}*/
int main()
{
	char str1[12] = "Hello";
	char str2[12] = "World";
	char str3[13];
	int len = 0;
	puts(str1);
	puts(str2);
	int i = 0;
	while(str1[i]!='\0'){
		len++;
		i++;
	}
//	str3 = strcopy(str3,str1);
//	str1 = strconcat(str1,str2);
	//len = strlen(str1);
//	puts(str3);
	puts(str1);
	printf("%d",len);
	i = 0;
/*	while(str2[i]='\0'){
		str1 = str1 + str2[i];
		i++;
	}
	puts(str1);
*/	return 0;
}
