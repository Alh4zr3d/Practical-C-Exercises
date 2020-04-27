#include <stdio.h>

int main() {
	char line[100];
	int num;
	
	int countBits(int);

	printf("Enter an integer: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%d", &num);

	printf("Number of bits set in this integer: %d\n", countBits(num));

	return (0);
}

/* 
Starts with the full integer and &s it with 1 to see if the rightmost bit is set.
Then shifts all the bits to the right and tests the next bit. Stops when all the
set bits have been shifted out, leaving 0 and breaking the loop.
*/

int countBits(int n) {
	int count = 0;

	while (n) {
		count += n & 1;
		n >>= 1;
	}

	return (count);
}