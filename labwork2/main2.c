#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int id;
	char name[10];
	int midterm;
	int final;
	// Question 2
	FILE *fptr, *fptr2;
	fptr = fopen("notlar1.txt", "r");
	fptr2 = fopen("notlar2.txt", "w+");
	while (fscanf(fptr, "%d %s %d", &id, name, &midterm)!= EOF){
		//fscanf(fptr, "%d %s %d", &id, name, &midterm);
		printf("%s\n", name);	
		printf("Enter the Final Grades: ");
		scanf("%d", &final);
		fprintf(fptr2, "%d %s %d %d\n", id, name, midterm, final);	
	}
	fclose(fptr);
	fclose(fptr2);
	return 0;
}
