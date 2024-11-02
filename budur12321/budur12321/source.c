#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int value;
	char password[30];
	char trueOne[30] = { '1','2','3' };
	
	scanf_s("%s", password, 30);
	value = strcmp(password, trueOne);
	printf("%s", password);
	
	if (value == 0)
	{
		printf("%s", "is 123");
	}
	else
	{
		printf("%s", " not 123");
	};

} 