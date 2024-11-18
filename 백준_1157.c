#include <stdio.h>

char data[1000000];

int main() {
	int i, cnt[26] = { 0, }, max[2] = {0,}, flag = 0;
	scanf_s("%s", data, sizeof(data));
	for (i = 0; i < 1000000; i++) {
		if (data[i] == "\n") break;
		else if ('a' <= data[i] && 'z' >= data[i]) data[i] -= 32;
		cnt[data[i] - 65] += 1;
	}
	for (i = 0; i < 26; i++) {
		if (cnt[i] > max[0]) {
			flag = 0;
			max[0] = cnt[i];
			max[1] = i;
		}
		else if (cnt[i] == max[0]) flag = 1;
	}
	if (flag == 1) printf("?");
	else printf("%c", max[1] + 65);

	return 0;
}