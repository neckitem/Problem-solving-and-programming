#include <stdio.h>

int main() {
	int arr[9][9], max = 0, x = 0, y = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf_s("%d", &arr[i][j]);
			if (max <= arr[i][j]) {
				max = arr[i][j];
				x = i + 1;
				y = j + 1;
			}
		}
	}
	printf("%d\n%d %d", max, x, y);

	return 0;
}