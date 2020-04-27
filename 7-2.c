#include <stdio.h>

int main() {
	char line[100];
	unsigned int day1;
	unsigned int month1;
	unsigned int year1;
	unsigned int day2;
	unsigned int month2;
	unsigned int year2;
	int days_in_month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	unsigned int tot1 = 0;
	unsigned int tot2 = 0;
	unsigned int diff;

	printf("Please enter the starting day in DD/MM/YYYY format (no leading zeroes): ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%u/%u/%u", &day1, &month1, &year1);

	if (day1 <= 0 || day1 > 31 || month1 <= 0 || month1 > 12 || year1 < 0 || year1 > 9999) {
		printf("Invalid date.");
		return (0);
	}

	printf("Please enter the ending day in DD/MM/YYYY format (no leading zeroes): ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%u/%u/%u", &day2, &month2, &year2);

	if (day2 <= 0 || day2 > 31 || month2 <= 0 || month2 > 12 || year2 < 0 || year2 > 9999) {
		printf("Invalid date.");
		return (0);
	}

	/* Overall strategy is to count the days from 0/0/0000 to each day and then simply subtract*/

	/* Calculate days from the year */

	tot1 += year1 * 365;

	/* Every leap year adds an additional day */

	tot1 += (year1 / 4) - (year1 / 100) + (year1 / 400);

	/* Calculate total days in current year's months prior to current month */

	for (unsigned int m = 0; m < month1 - 1; m++) {
		tot1 += days_in_month[m];
	}

	/* Determine if a leap year needs to be taken into account for the current year, and add one day if it does. */

	if (year1 % 4 == 0) {
		if (year1 % 100 != 0 || year1 % 400 == 0) {
			if (month1 > 2)
				tot1 += 1;
		}
	}

	/* Add days in current month */

	tot1 += day1;

	/* Do all the same calculations for date 2 */

	tot2 += year2 * 365;

	tot2 += (year2 / 4) - (year2 / 100) + (year2 / 400);

	for (unsigned int m = 0; m < month2 - 1; m++) {
		tot2 += days_in_month[m];
	}

	if (year2 % 4 == 0) {
		if (year2 % 100 != 0 || year2 % 400 == 0) {
			if (month2 > 2)
				tot2 += 1;
		}
	}

	tot2 += day2;

	/* Determine which total is larger and then find the difference. */

	if (tot2 >= tot1)
		diff = tot2 - tot1;
	else
		diff = tot1 - tot2;

	printf("Days between these dates: %u", diff);

	return (0);
}