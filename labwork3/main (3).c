#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char letter_grade(int score, int *just_missedp);	// Prototype
void student_info(int *number, char name[10], int *note);
void grades(int number, char name[], int note, char a, int b);

int main() {
	char a;
	int b;
	int number;
	char name[10];
	int note;
	
	while(!feof(stdin)){
		student_info(&number, name, &note);
		if(feof(stdin)){
			break;
		}
		a = letter_grade(note, &b);
		grades(number, name, note, a, b);
	}
	
	return 0;
}

char letter_grade(int score, int *just_missedp)		// letter Grade Function
{
	if(score<=100 && score>=90){
		return 'A';
	}
	else if(score<=89 && score>=75){
		if(score == 89){
			*just_missedp = 1;
		}else{
			*just_missedp = 0;
		}
		return'B';
	}
	else if(score<=74 && score>=60){
		if(score == 74){
			*just_missedp = 1;
		}else{
			*just_missedp = 0;
		}
		return 'C';
	}
	else if(score<=59 && score>=45){
		if(score == 59){
			*just_missedp = 1;
		}else{
			*just_missedp = 0;
		}
		return 'D';
	}
	else{
		if(score == 44){
			*just_missedp = 1;
		}else{
			*just_missedp = 0;
		}
		return 'F';
	}
}

void student_info(int *number, char name[10], int *note){
	printf("Please Enter The Values(student number, name and note): ");
	scanf("%d %s %d", number, name, note);	// getting values from user
}
void grades(int number, char name[], int note,char a, int b){
	FILE *f;	// file pointer
	f = fopen("grades.txt", "a");
	fprintf(f, "%d %s %d %c %d\n", number, name, note, a, b);	// writing values to the file
	fclose(f);
}
