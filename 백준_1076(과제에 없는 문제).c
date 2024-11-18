#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	char color[7], color_data[10][7] = {"black", "brown", "red", "orange", "yellow",
										 "green", "blue", "violet", "grey", "white"}; 
	long long int result = 0;

	for (int i = 0; i < 3; i++) {
		scanf_s("%s", &color, sizeof(color));
		for (int j = 0; j < 10; j++) {
			if (strcmp(color, color_data[j]) == 0) {
				if (i == 0) result += j * 10;
				else if (i == 1) result += j;
				else if (i == 2) result *= pow(10, j);
			}
		}
	}
	printf("%lld", result);

	return 0;
}