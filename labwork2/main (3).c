#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	// Question 1
	int id;
	char name[10];
	int midterm;
	FILE *fptr;
	fptr = fopen("notlar1.txt", "w+");
	printf("Please enter Student id name and midterm note: \n");
	scanf("%d %s %d", &id, name, &midterm);
	while(!feof(stdin)){
		printf("Please enter Student id name and midterm note: \n");
		fprintf(fptr, "%d %s %d\n", id, name, midterm);
		scanf("%d %s %d", &id, name, &midterm);
	}
	fclose(fptr);
	
	return 0;
}
