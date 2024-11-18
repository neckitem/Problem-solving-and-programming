#include <stdio.h>
#include <string.h>

int main() {
	char data[11];
	char temp;
	scanf_s("%s", data, sizeof(data));
	for (int i = 0; i < strlen(data) - 1; i++) {
		for (int j = i; j < strlen(data) - 1; j++) {
			if(data[i] < data[j + 1]) {
				temp = data[i];
				data[i] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}
	printf("%s", data);

	return 0;
}