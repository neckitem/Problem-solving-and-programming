#include <stdio.h>

int main() {
	int n, result = 0;
	scanf_s("%d", &n);

	if ((n % 4 == 0) && (n % 100 != 0)) result = 1;
	else if (n % 400 == 0) result = 1;
	else result = 0;

	printf("%d", result);

	return 0;
}