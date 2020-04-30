#include <stdio.h>

int main() {
	char line[100];
	int year;

	printf("Please enter a four-digit year: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%d", &year);

	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0)
				printf("%d is a leap year!", year);
			else
				printf("%d is not a leap year.", year);
		}
		else 
			printf("%d is a leap year!", year);
	}
	else
		printf("%d is not a leap year.", year);

	return (0);
}