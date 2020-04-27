#include <stdio.h>
#include <string.h>

int main() {
	char line[100];
	double eng_num;
	char eng_unit[15];
	double metric_num;
	char met_unit[11];

	printf("Enter a measurement in feet, pounds, or miles: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%lf %s", &eng_num, &eng_unit, sizeof(eng_unit));

	if (strcmp(eng_unit, "feet") == 0 || strcmp(eng_unit, "foot") == 0 || strcmp(eng_unit, "ft") == 0) {
		strcpy_s(met_unit, sizeof(met_unit), "meters");
		metric_num = eng_num * 0.3048;
	}
	else if (strcmp(eng_unit, "pounds") == 0 || strcmp(eng_unit, "pound") == 0 || strcmp(eng_unit, "lb") == 0 || strcmp(eng_unit, "lbs") == 0) {
		strcpy_s(met_unit, sizeof(met_unit), "kilograms");
		metric_num = eng_num * 0.453592;
	}
	else if (strcmp(eng_unit, "miles") == 0 || strcmp(eng_unit, "mile") == 0 || strcmp(eng_unit, "mil") == 0 || strcmp(eng_unit, "m") == 0) {
		strcpy_s(met_unit, sizeof(met_unit), "kilometers");
		metric_num = eng_num * 1.60934;
	}
	else {
		printf("Unit not recognized.\n");
		return (0);
	}

	printf("The metric equivalent is: %f %s.\n", metric_num, met_unit);

	return (0);
}