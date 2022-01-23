#include<stdio.h>
int main()
{
	char sentence[100];
       	int upper = 0, lower = 0, sp = 0, num = 0;
	int i = 0;
	printf("Enter a sentence: ");
	fgets(sentence,100,stdin);
	printf("%s",sentence);
	while(sentence[i] != '\0')
	{
		if(sentence[i] >= 65 && sentence[i] <= 90)
			upper++;
		else if(sentence[i] >= 97 && sentence[i] <= 122)
			lower++;
		else if(sentence[i] >= 48 && sentence[i] <= 57)
			num++;
		else
			sp++;
		i++;	
	}
	printf("\nUppercase Characters: %d\nLowercase Characters: %d\nNumerals: %d\nSpecial Characters = %d\n",upper,lower,num,sp);
	return 0;

}	
