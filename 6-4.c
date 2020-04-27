#include <stdio.h>
#include <math.h>

int main() {
	char line[100];
/*	float total;*/
	int dollars;
	int cents;
	int quarters;
	int dimes;
	int nickels;
	int pennies;
	
	/*
	printf("Enter a dollar amount with no dollar sign: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%f", &total);
	*/

	printf("Enter a dollar amount with no dollar sign: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%d.%d", &dollars, &cents);

	/*
	cents = round(fmodf(total, truncf(total)) * 100);
	printf("Cents: %d\n", cents);
	*/

	printf("Dollars: %d\nCents: %d\n", dollars, cents);

	quarters = cents / 25;
	dimes = (cents - (quarters * 25)) / 10;
	nickels = (cents - (quarters * 25) - (dimes * 10)) / 5;
	pennies = cents - (quarters * 25) - (dimes * 10) - (nickels * 5);

	printf("Quarters: %d\n", quarters);
	printf("Dimes: %d\n", dimes);
	printf("Nickels: %d\n", nickels);
	printf("Pennies: %d\n", pennies);

	return (0);
}