#include <stdio.h>

int main() {
	int a, b, c;
	int result = 0;
	scanf_s("%d %d %d", &a, &b, &c);

	if ((a == b) && (b == c)) {
		result = 10000 + a * 1000;
	}
	else if ((a == b) || (b == c) || (c == a)) {
		if (a == b) result = 1000 + a * 100;
		else if (b == c) result = 1000 + b * 100;
		else if (c == a) result = 1000 + c * 100;
	}
	else {
		if ((a > b) && (a > c)) result = a * 100;
		else if ((b > a) && (b > c)) result = b * 100;
		else if ((c > a) && (c > b)) result = c * 100;
	}
	printf("%d", result);

	return 0;
}