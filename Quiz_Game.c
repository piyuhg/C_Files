#include<stdio.h>
#include<conio.h>

#define number_of_ques 10
#define length_of_ques 150
#define length_of_options 100

int marks = 0;
char ques[number_of_ques][length_of_ques] = 
						 {"\tQues 1.\t Hello world",
						  "\tQues 2.\t How you Doing!!",
						   "\tQues 3.\t This is ques 3",
						   "\tQues 4.\t This is ques 4",
						   "\tQues 5.\t This is ques 5",
						   "\tQues 6.\t This is ques 6",
						   "\tQues 7.\t This is ques 7",
						   "\tQues 8.\t This is ques 8",
						   "\tQues 9.\t This is ques 9",
						   "\tQues 10.\t This is ques 10"};
char options[number_of_ques][length_of_options] =
					{"\tA. First Option\t\tB. Second Option\n\tC. Third Option\t\tD. Fourth Option",
    				 "\tA. First Option\t\tB. Second Option\n\tC. Third Option\t\tD. Fourth Option",
   					 "\tA. First Option\t\tB. Second Option\n\tC. Third Option\t\tD. Fourth Option",
    				 "\tA. First Option\t\tB. Second Option\n\tC. Third Option\t\tD. Fourth Option",
					 "\tA. First Option\t\tB. Second Option\n\tC. Third Option\t\tD. Fourth Option",
    				 "\tA. First Option\t\tB. Second Option\n\tC. Third Option\t\tD. Fourth Option",
					 "\tA. First Option\t\tB. Second Option\n\tC. Third Option\t\tD. Fourth Option",
    				 "\tA. First Option\t\tB. Second Option\n\tC. Third Option\t\tD. Fourth Option",
					 "\tA. First Option\t\tB. Second Option\n\tC. Third Option\t\tD. Fourth Option",
    				 "\tA. First Option\t\tB. Second Option\n\tC. Third Option\t\tD. Fourth Option",}; 
char right_ans[number_of_ques] = {'A','B','C','D','A','B','C','D','A','B'};
char user_ans[number_of_ques] = {};	
void print_ques(int i){
		int index = 0;
		while(ques[i][index]!= '\0')
			putchar(ques[i][index++]);
		printf("\n");
}

void input_ans(int i){
		printf("\n");	
		int next = 1;
		char temp;
		do{
			if(!next)
				printf("\tEnter valid ans!! (A,B,C,D)\n");
			printf("\tEnter your ans:	");	
			scanf(" %c",&temp);
			if((temp>=65 && temp<=68)||(temp>=97 && temp<=100))	
				break;
			else
				next = 0;
		}while(!next);
		if(temp>=97 && temp<=100)
			temp = temp - 32;
		user_ans[i] = temp;
}

void print_options(int i){
	int index = 0;
		while(options[i][index]!= '\0')
			putchar(options[i][index++]);
		printf("\n");
}

char check_ans(int i){
	if(right_ans[i]==user_ans[i]){
		marks++;
		printf("\tCorrect Answer!!\n\n");
	}
	else{
		printf("\tWrong Answer!!");
		printf("\tCorrect Answer: %c\n\n",right_ans[i]);
	}	
}

int main(){
	printf("\t__________________________________________________________________________");
	printf("\n\n\t\t*******************Welcome to the Quiz!!*******************\n");
	printf("\t__________________________________________________________________________");
	printf("\n\n\t\t\tEnter your name to continue: ");
	char username[30];
	fgets(username,30,stdin);
	printf("\n\tHello %s",username);
	printf("\n\tPress Y to continue, on any other key to exit!: ");
	char play;
	scanf("%c",&play);
	if(!(play=='Y'||play=='y')){
		printf(" %c",play);
		printf("\tExiting the QUIZ GAME");
		printf("\n\tHave a nice day!!");
		return 0;
	}
	printf("\n\tLets start the quiz!!\n\n\t**Note: Enter your answer as A B C D \n\n\tHere comes the first question!!\n\n");
	int makrs = 0;
	int ques_num;
	for(ques_num = 0;ques_num<number_of_ques;ques_num++){
		print_ques(ques_num);
		print_options(ques_num);
		input_ans(ques_num);
		check_ans(ques_num);
	}
	printf("\n\tThanks for taking the quiz %s",username);
	printf("\tYou have scored %d/10 marks!!",marks);
	if(marks==10)
		printf("\n\tExcellent");
	else if(marks>=8)
		printf("\n\tVery Good");
	else if(marks>=6)
		printf("\n\tGood");	
	else if(marks>=4)
		printf("\n\tAverage");
	else
		printf("\n\tBetter luck next time!!");
	getch();		
	return 0;
}
