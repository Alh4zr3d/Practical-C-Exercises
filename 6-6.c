#include <stdio.h>

int main() {
	char line[100];
	int hours;
	float wage;
	float weekly_pay;

	printf("Enter the employee's hourly wage in dollars (no dollar sign): ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%f", &wage);

	if (wage < 0) {
		printf("Invalid input.");
		return (0);
	}

	printf("Enter the employee's hours worked this week: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%d", &hours);

	if (hours < 0 || hours > 168) {
		printf("Invalid input.");
		return (0);
	}
	
	if (hours > 40)
		weekly_pay = (hours - 40) * (wage * 1.5) + 40 * wage;
	else
		weekly_pay = hours * wage;

	printf("This employee's pay for the week is: $%.2f", weekly_pay);

	return (0);
}