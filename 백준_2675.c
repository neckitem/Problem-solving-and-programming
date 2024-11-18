#include <stdio.h>
#include <string.h>

int main() {
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		int a;
		char b[20];
		scanf_s("%d %s", &a, b);
		for (int j = 0; j < strlen(b); j++) {
			for (int k = 0; k < a; k++) printf("%c", b[j]);
		}
		printf("\n");
	}

	return 0;
}