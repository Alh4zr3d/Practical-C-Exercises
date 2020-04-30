#include <stdio.h>

int main() {
	char line[100];
	float k_speed;
	float m_speed;

	printf("Please enter a speed in kilometers per hour: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%f", &k_speed);

	m_speed = k_speed * 0.6213712;

	printf("This speed in miles per hour is: %.2f", m_speed);

	return (0);
}