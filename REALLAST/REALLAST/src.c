#include<stdlib.h>
#include<stdio.h>
#include <windows.h>

int main() {
	

	
	char characters[] = { '\\', '|', '/', '—' };
	int length = sizeof(characters) / sizeof(characters[0]);
	int rock = 1;
	int paper = 2;
	int scissors = 3;
	int input = 0;
	int ki = 0;

	printf("%s","WELCOME TO THE ROCK PAPER SCISSORS GAME \n \n \n");
	printf("%s", "enter 1 for ROCK \n");
	printf("%s", "enter 2 for PAPER \n");
	printf("%s", "enter 3 for SCISSORS \n");
	printf("%s", "enter 4 for EXIT \n");




	
		while (ki == 0)
		{
			printf("%s", "YOU: ");
			scanf_s("%d", &input);


			switch (input)
			{
			case 1:
				printf("%s", " my choice is ROCK \n \n");
				ki = 1;
				break;

			case 2:
				printf("%s", " my choice is PAPER \n \n");
				ki = 1;
				break;

			case 3:
				printf("%s", " my choice is SCISSORS \n \n");
				ki = 1;
				break;
			case 4:
				return 0;
			}
		}

		switch (input)
		{
		case 1:
			printf("%s", "COMPUTER:\n my choice is PAPER \n \n");
			break;

		case 2:
			printf("%s", "COMPUTER:\n my choice is SCISSORS \n \n");
			break;
		case 3:
			printf("%s", "COMPUTER:\n my choice is ROCK \n \n");
			break;

		}


		printf("Analyzing... ");

		for (int i = 0; i < 100; i++) {
			printf("\r Analyzing... %c", characters[i % length]);
			fflush(stdout);
			Sleep(100);

		}
		printf("%s", "\n \n \n");

		printf("%s", "you lost \n \n");


		system("pause");

	}
	
