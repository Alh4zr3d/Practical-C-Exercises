#include <stdio.h>

#define X_SIZE 10
#define Y_SIZE 10

/* 8 bits per byte, so X_SIZE/8 */

char graphics[X_SIZE / 8][Y_SIZE]; /* graphical data */

#define SET_BIT(x,y) graphics[(x)/8][y] |= (0x80 >> ((x)%8))
#define CLEAR_BIT(x,y) graphics[(x)/8][y] &= ~(0x80 >> ((x)%8))
#define TEST_BIT(x,y) (graphics[(x)/8][y] & (0x80 >> ((x)%8))) ? ("BIT IS SET") : ("BIT IS NOT SET")

int main() {
	int locX;
	int locY;
	void print_graphics(void);

	for (locX = 0; locX < X_SIZE; locX++) {
		for (locY = 0; locY < Y_SIZE; locY++) {
			if (locX == 0 || locX == X_SIZE - 3)
				SET_BIT(locX, locY);
			else {
				if (locY == 0 || locY == Y_SIZE - 1)
					SET_BIT(locX, locY);
			}
		}
	}

	print_graphics();

	return (0);
}

/* Prints the graphics bit array as X's and .'s */

void print_graphics(void) {
	int x;
	int y;
	unsigned int bit;

	for (y = 0; y < Y_SIZE; y++) {
		for (x = 0; x < X_SIZE / 8; x++) {
			for (bit = 0x80; bit > 0; bit = (bit >> 1)) {
				if ((graphics[x][y] & bit) != 0)
					printf("X");
				else
					printf(".");
			}
		}
		printf("\n");
	}
}