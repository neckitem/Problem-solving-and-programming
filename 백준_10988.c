#include <stdio.h>
#include <string.h>

int main() {
	char data[101];
	int result = 0;
	scanf_s("%s", data, sizeof(data));
	for (int i = 0; i < strlen(data) / 2 + 1; i++) {
		if (data[i] == data[strlen(data) - i - 1]) result = 1;
		else {
			result = 0;
			break;
		}
	}
	printf("%d", result);

	return 0;
}