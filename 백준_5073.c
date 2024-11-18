#include <stdio.h>

int main() {
	int a, b, c, max[2] = { 0, }, i, flag = 1;
	while (flag) {
		scanf_s("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0) {
			flag = 0;
			continue;
		}
		if (a < b + c && b < a + c && c < a + b) {
			if (a == b && b == c) printf("Equilateral\n");
			else if (a == b || b == c || c == a) printf("Isosceles\n");
			else printf("Scalene\n");
		}
		else printf("Invalid\n");
	}

	return 0;
}