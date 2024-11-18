#include <stdio.h> //동적할당 사용 x


int main() {
	int x, y, i, j;
	scanf_s("%d %d", &x, &y);
	int arr1[100][100] = { 0, };
	int arr2[100][100] = { 0, };
	int arr3[100][100] = { 0, };

	for (i = 0; i < x; i++) for (j = 0; j < y; j++) scanf_s("%d", &arr1[i][j]);
	for (i = 0; i < x; i++) for (j = 0; j < y; j++) scanf_s("%d", &arr2[i][j]);

	for (i = 0; i < x; i++) for (j = 0; j < y; j++) arr3[i][j] = arr1[i][j] + arr2[i][j];

	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
	}


	return 0;
}