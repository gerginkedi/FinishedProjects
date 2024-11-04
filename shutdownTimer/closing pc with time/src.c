#include<stdio.h>
#include<stdlib.h>

int main() {

	int hours = 0;
	int minutes = 0;
	int hourFromSecond;
	int minuteFromSecond;
	int seconds = 0;
	int total;
	char command[50];

	printf("%s", "please enter hour: ");
	scanf_s("%d", &hours);

	printf("%s", "please enter minutes: ");
	scanf_s("%d", &minutes);

	printf("%s", "please enter seconds: ");
	scanf_s("%d", &seconds);

	hourFromSecond = hours * 60 * 60;
	minuteFromSecond = minutes * 60;

	total = seconds + minuteFromSecond + hourFromSecond;

	printf("%s", "bilgisayariniz ");
	printf("%d", hours);
	printf("%s", " saat ");
	printf("%d", minutes);
	printf("%s", " dakika ");
	printf("%d", seconds);
	printf("%s", " saniye sonra kapancaktir");

	snprintf(command, sizeof(command), "shutdown /s /t %d", total);


	system(command); 


}