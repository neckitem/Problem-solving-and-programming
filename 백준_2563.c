#include <stdio.h>

int main() {
	int arr[100][100] = { 0, };
	int num, x, y, i, j, k, area = 0;
	scanf_s("%d", &num);

	for (i = 0; i < num; i++) {
		scanf_s("%d %d", &x, &y);
		for (j = x; j < x + 10; j++) {
			for (k = y; k < y + 10; k++) {
				if (arr[j][k] == 0) arr[j][k] = 1;
				else if (arr[j][k] == 1) {
					area++;
				}
			}
		}
	}
	printf("%d", 100*num-area);

	return 0;
}