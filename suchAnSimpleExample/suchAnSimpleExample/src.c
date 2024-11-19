#include<stdio.h>
#include<stdlib.h>


void check(char note[2]) {

	if (note == "AA") {

		printf("%s", "90 100 arasi");

	}
	else if (note == "BA") {

		printf("%s", " 85 90 arasi");


	}

	else if (note == "BB") {

		printf("%s", "80 85 arasi");


	}

	else if (note == "CB") {

		printf("%s", "75 80 arasi");


	}

	else if (note == "CC") {

		printf("%s", " 70 75 arasi");

	}

	else if (note == "DC") {

		printf("%s", "65 70 arasi");

	}

	else if (note == "DD") {

		printf("%s", " 60 65 arasi");

	}

	else if (note == "FF") {

		printf("%s", "0 60 arasi");

	}


}


int main() {

	check("BB");

}