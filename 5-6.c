#include <stdio.h>

int main() {
	char line[100];
	int minutes;
	int hours;
	int min;

	printf("Please enter the number of minutes: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%d", &minutes);

	hours = minutes / 60;
	min = minutes % 60;

	printf("Hours: %d\nMinutes: %d", hours, min);

	return (0);
}