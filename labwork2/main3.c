#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	// Question 3
	int id, midterm, final;
	char name[10];
	float average=0;
	int count=0;
	FILE *fptr;
	fptr = fopen("notlar2.txt","r");
	while(fscanf(fptr,"%d %s %d %d", &id, name, &midterm, &final)!=EOF){
		average += (midterm*40)/100 + (final*60)/100 ;
		count++;	
	}
	
	printf("Class average is %.2f\n", average/count);
	printf("%d", count); 
	return 0;
}
