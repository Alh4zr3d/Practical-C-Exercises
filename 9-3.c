#include <stdio.h>
#include <stdlib.h>

static int length = 8;

/* Recursive function to iterate backawads through the array provided and test if each element matches the num parameter.
Returns the number of times the number is found.*/

int count(int num, int arr[], int length) {
	length--;
	
	if (length == 0) {
		if (arr[length] == num)
			return 1;
		else
			return 0;
	}
	else {
		if (arr[length] == num)
			return (1 + count(num, arr, length));
		else
			return (count(num, arr, length));
	}
}

int main() {
	/* int array[] = { 5,10,2,5,7,5,2,13 };

	static int number = 5; */
	static char line[100];
	static int number;
	static int length;

	/* Allow the user to enter the size of the array as a number of integers */

	printf("Enter the number of numbers to be entered: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%d", &length);
	
	if (length == NULL || length <= 0) {
		printf("ERROR: Must enter a positive integer.");
		return (0);
	}
	
	printf("Enter the number to count within the array: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%d", &number);
	
	if (number == NULL) {
		printf("ERROR: Search number cannot be null.");
		return (0);
	}
	
	/* Malloc is needed to dynamically declare an array of variable length at runtime */
	
	int *array = malloc(length * sizeof(*array));
	if (array == NULL) {
		printf("ERROR: Array is null.");
		return (0);
	}

	for (int i = 0; i < length; i++) {
		printf("Enter an integer for the array: ");
		fgets(line, sizeof(line), stdin);
		sscanf_s(line, "%d", &array[i]);
	}

	printf("The number %d appears %d time(s) in this array.", number, count(number, array, length));
	return(0);
}