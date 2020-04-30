/* Program to shift all bits in an integer to the extreme left end. */

#include <stdio.h>

int main() {
	char line[100];
	int num;
	unsigned int result = 0;
	unsigned int mask = 1;

	int countBits(int);

	printf("Enter an integer: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%d", &num);

	/* Get the number of bits set in this number. */
	int bitCount = countBits(num);

	printf("Number of bits: %d\n", bitCount);

	/* 
	Loop for each bit; first left shift the bit to the far left,
	subtracting spaces for each loop to create a mask with a single
	bit set in the correct place. Then OR it with the result to set 
	that bit in the result.
	*/
	for (int i = 0; i < bitCount; i++) {
		mask <<= (31 - i);
		result |= mask;
		mask = 1;
	}

	printf("Shifted number: %lu\n", result);

	return (0);
}

/* Count the number of bits using a function from a previous exercise. */

int countBits(int n) {
	int count = 0;

	while (n) {
		count += n & 1;
		n >>= 1;
	}

	return (count);
}