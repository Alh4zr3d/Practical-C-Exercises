#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
	char line[100];
	float numers[100];
	float resists[100];
	float max = 0;
	float num = 0;
	bool found_LCM = true;
	float total;

	printf("Please enter parallel resistors; enter 0 to terminate (100 resistors total):\n");

	for (int i = 0; i < 100; i++) {
		printf("Resistor: ");
		fgets(line, sizeof(line), stdin);
		sscanf_s(line, "%f", &resists[i]);

		if (resists[i] == 0)
			break;

		/* Find largest */
		
		if (resists[i] > max)
			max = resists[i];
	}

	/* printf("Max value: %d\n", max); */

	/* Find LCM of resistors */
	
	while (1) {
		for (int j = 0; j < 100; j++) {
			if (resists[j] == 0)
				break;
			
			if (fmodf(max, resists[j]) != 0)
				found_LCM = false;
		}

		if (found_LCM == true)
			break;
		else {
			max++;
			found_LCM = true;
		}
		
	}

	/* printf("Lowest common multiple: %d\n", max); */

	/* Multiply to get fractions with common denominators */
	
	for (int k = 0; k < 100; k++) {
		if (resists[k] == 0)
			break;
		numers[k] = max / resists[k];
	}
	
	for (int l = 0; l < 100; l++) {
		if (resists[l] == 0)
			break;
		num += numers[l];
	}
	
	total = max / num;

	printf("These parallel resistors total: %.3f", total);

	return (0);
}