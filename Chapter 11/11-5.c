#include <stdio.h>
#include <string.h>

int main() {
	char line[100];
	unsigned int num;
	unsigned char result[4] = { 0,0,0,0 };

	printf("Please enter a positive integer: ");
	fgets(line, sizeof(line), stdin);

	/* 
	I just don't want to deal with a signed bit here;
	I feel like it complicates everything for no reason.
	*/

	char* testNeg = strchr(line, '-');
	if (testNeg) {
		printf("Negative numbers not permitted.");
		return (0);
	}

	sscanf_s(line, "%lu", &num);

	/*
	Anding the number with the masks and shifting to create the char.
	*/

	result[0] = (num & 0xFF000000UL) >> 24;
	result[1] = (num & 0x00FF0000UL) >> 16;
	result[2] = (num & 0x0000FF00UL) >> 8;
	result[3] = (num & 0x000000FFUL);

	/* Printing results. */

	for (int i = 0; i < 4; i++)
		printf("Char %d: %lu\n", i + 1, result[i]);

	return(0);
}