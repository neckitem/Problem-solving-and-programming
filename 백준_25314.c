#include <stdio.h>

int main() {
	int a;
	scanf_s("%d", &a);
	for (int i = 0; i < (a / 4); i++) {
		printf("long ");
	}
	printf("int");

	return 0;
}