#include <stdio.h>
#include <math.h>
#define TAX_PERCENT 0.08

int main() {
	char line[100];
	float amount;
	float total;

	printf("Please enter the sale base amount in dollars (no dollar sign): ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%f", &amount);

	total = amount + (amount * TAX_PERCENT);

	printf("The amount with tax is: %.2f", total);

	return (0);
}