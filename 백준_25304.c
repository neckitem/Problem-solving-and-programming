#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, n, a, b, sum =0;
	scanf_s("%d", &x);
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d %d", &a, &b);
		sum += a * b;
	}
	if (x == sum) printf("Yes");
	else printf("No");

	return 0;
}