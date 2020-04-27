#include <stdio.h>

int main() {
	char line[100];
	int hours;
	int minutes;
	int tot_minutes;

	printf("Please enter the hours: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%d", &hours);

	printf("Please enter the minutes: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%d", &minutes);

	tot_minutes = (hours * 60) + minutes;

	printf("The total minutes is: %d", tot_minutes);
	return (0);
}