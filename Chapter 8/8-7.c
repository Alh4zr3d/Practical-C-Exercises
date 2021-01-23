#include <stdio.h>
#include <stdlib.h>

int main() {
	char line[100];
	int value;
	int numdigits = 0;
	int digits[10];

	printf("Enter an integer between zero and one hundred: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%d", &value);
	
	if (abs(value) > 100) {
		printf("Error: number out of bounds.");
		return (0);
	}

	if (value < 0)
		printf("negative ");

	value = abs(value);

	if (value == 100)
		printf("one hundred");
	else if (value == 0)
		printf("zero");
	else if (value > 100) {
		printf("Error: Value out of range.");
		return (0);
	}
	else if (value == 10)
		printf("ten");
	else if (value == 11)
		printf("eleven");
	else if (value == 12)
		printf("twelve");
	else if (value == 13)
		printf("thirteen");
	else if (value == 14)
		printf("fourteen");
	else if (value == 15)
		printf("fifteen");
	else if (value == 16)
		printf("sixteen");
	else if (value == 17)
		printf("seventeen");
	else if (value == 18)
		printf("eighteen");
	else if (value == 19)
		printf("nineteen");
	else if (value >= 20 && value <= 29)
		printf("twenty");
	else if (value >= 30 && value <= 39)
		printf("thirty");
	else if (value >= 40 && value <= 49)
		printf("forty");
	else if (value >= 50 && value <= 59)
		printf("fifty");
	else if (value >= 60 && value <= 69 /*Nice*/)
		printf("sixty");
	else if (value >= 70 && value <= 79)
		printf("seventy");
	else if (value >= 80 && value <= 89)
		printf("eighty");
	else if (value >= 90 && value <= 99)
		printf("ninety");

	if (value % 10 == 0 && value >= 10)
		return (0);
	else {
		if (value > 20)
			printf("-");
	}

	switch (value % 10) {
	case 1:
		printf("one");
		break;
	case 2:
		printf("two");
		break;
	case 3:
		printf("three");
		break;
	case 4:
		printf("four");
		break;
	case 5:
		printf("five");
		break;
	case 6:
		printf("six");
		break;
	case 7:
		printf("seven");
		break;
	case 8:
		printf("eight");
		break;
	case 9:
		printf("nine");
		break;
	}

	return (0);
}
