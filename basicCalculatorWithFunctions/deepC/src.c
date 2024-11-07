#include<stdlib.h>
#include<stdio.h>


int calculator(int x, int y) {

	int z;

	printf("%s", "for divide 0 \n");
	printf("%s", "for multiplication 1\n");
	printf("%s", "for sum 2\n");
	scanf_s("%d", &z);

	switch (z)
	{
	case 0:

		return x / y;

	case 1:

		return x * y;

	case 2:

		return x + y;


	}

}


int main() {
	int x;
	int y;

	scanf_s("%d", &x);
	scanf_s("%d", &y);

	printf("%d", calculator(x, y));

}