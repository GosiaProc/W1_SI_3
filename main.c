#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>


int grades[5][7] = {
{90,98,98,92,94,80,98},
{52,34,45,56,56,90,90},
{53,34,45,56,56,70,72},
{54,34,45,56,56,30,30},
{55,34,45,56,56,90,97}
};

char names[5][30] = { "Harper Eland","Celement Hayes","Belinsa Jacobs","Cedric Santos","Fiona Wilcher" };

void average_note_for_given_values();
int find_student(char[]);
void stats();

int student_is_smart_enough(int index) {
	int ile = 0;
	for (int i = 0; i < 7; i++)
	{
		if (grades[index][i] > 95)
			ile = ile + 1;
	}
	return (ile >= 3);
}


 //oblicza  srednia z podanych ocen

void average_note_for_given_values()
{
	int D1, D2, D3, D4, D5, D6, D7, DA;
	printf("Podaj oceny ucznia w procentach \n");
	scanf_s("%d%d%d%d%d%d%d", &D1, &D2, &D3, &D4, &D5, &D6, &D7);
	DA = (D1 + D2 + D3 + D4 + D5 + D6 + D7) / 7;
	printf("srednia ocen jest rowna: %d\n", DA);

	if (50 >= DA) 
	printf("Your grade F \n");
	else if (DA <= 60 && DA >= 50.1)
	printf("Your grade E \n");
	else if (DA <= 70 && DA >= 60.1)
	printf("Your grade D \n");
	else if (DA <= 80 && DA >= 70.1)
	printf("Your grade C \n");
	else if (DA <= 90 && DA >= 80.1)
	printf("Your grade B \n");
	else if (DA >= 90.1)
	printf("Your grade A \n");

	
}


int main()
{
	
	printf("Podaj mi imie\n");
	char name[64];
	gets(name);
	printf("Your name is %s\n", name);

	int index= find_student(name);
	
	//stats();


		if (student_is_smart_enough(index))
			printf("Uczen otrzymuje stypendium\n");
		else
			printf("Uczen nie otrzymuje stypendium\n");
		
		return 0;



	/*
	int avgnote = 0;
	int sum = 0;
	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 7; j++) {
			sum = sum + grades[i][j];
		}

		avgnote = sum / 7;
		printf("Uczen %s \n", names[i]);
		printf("Srednia ocen jest rowna: %d \n", avgnote);
		sum = 0;
	}
	*/
	

	// average_note();

	return 0;

}
int find_student(char*name) {
	for (int i = 0; i < 5; i++)
	{
		if (strcmp(names[i],name)==0) {
			printf("Student nr %d\n",i+1);
			return i;
		}
	}
	printf("ERRRRRR");
	return -1;
}


void stats() 

{
	printf("statystyki dla dyrekcji\n");
	int sum = 0;
	int avgnotes = 0;
	for (int i = 0; i < 7; i++) {
		printf("Przedmiot %d \n", i + 1);
		for (int j = 0; j < 5; j++) {
			sum = sum + grades[j][i];
		}

		avgnotes = sum / 5;
		printf("Srednia ocen jest rowna: %d \n", avgnotes);
		sum = 0;
	}
}