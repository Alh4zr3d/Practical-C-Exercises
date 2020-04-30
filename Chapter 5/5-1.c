#include <stdio.h>

int main() {
	
	char line[100];
	float c_temp;
	float f_temp;
	
	printf("Enter a temperature in Centigrade: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%f", &c_temp);

	f_temp = (1.8 * c_temp) + 32.0;

	printf("This temperature is %.2f in Fahrenheit.\n", f_temp);

	return (0);
}