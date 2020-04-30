#include <stdio.h>

int main() {
	char line[100];
	int nums[100];
	short count = 0;
	short pos = 0;
	short neg = 0;

	while (1) {
		printf("Please enter a number (enter 0 to terminate, max 100 numbers): ");
		fgets(line, sizeof(line), stdin);
		sscanf_s(line, "%d", &nums[count]);

		if (nums[count] == 0 || count == 99)
			break;
		count++;
	}

	for (int i = 0; i < 100; i++) {
		if (nums[i] > 0)
			pos++;
		else if (nums[i] < 0)
			neg++;
		else
			break;
	}

	printf("Total positive numbers: %d\nTotal negative numbers: %d\n", pos, neg);

	return (0);
}