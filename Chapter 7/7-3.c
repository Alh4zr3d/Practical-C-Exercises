#include <stdio.h>
#include <string.h>
#include <math.h>
#define KB 1024
#define MB 1024*KB
#define GB 1024*MB

int main() {
	char line[100];
	double size;
	char unit[3];
	double tot_seconds;
	int days;
	int hours;
	int minutes;
	float seconds;

	printf("Enter a filesize in KB, MB, or GB (ex. 1.54 GB): ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%lf %s", &size, &unit, sizeof(unit));

	if (size < 0) {
		printf("Please enter a positive decimal number for file size.\n");
		return (0);
	}

	/* Serial transmission line transmits 960 characters (960 bytes) per second. */

	if (_strcmpi(unit, "B") == 0)
		tot_seconds = size / 960.0;
	else if (_strcmpi(unit, "KB") == 0)
		tot_seconds = (size * KB) / 960.0;
	else if (_strcmpi(unit, "MB") == 0)
		tot_seconds = (size * MB) / 960.0;
	else if (_strcmpi(unit, "GB") == 0)
		tot_seconds = (size * GB) / 960.0;
	else {
		printf("Invalid unit.\n");
		return (0);
	}
	
	days = round(tot_seconds) / 86400;
	hours = (round(tot_seconds) - (days * 86400)) / 3600;
	minutes = (round(tot_seconds) - (days * 86400) - (hours * 3600)) / 60;
	seconds = tot_seconds - (days * 86400) - (hours * 3600) - (minutes * 60);

	printf("Estimated total number of seconds needed: %lf\n", tot_seconds);
	printf("Days: %d\nHours: %d\nMinutes: %d\nSeconds: %.2f", days, hours, minutes, seconds);

	return (0);
}