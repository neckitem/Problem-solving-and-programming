//망할 시간초과
#include <stdio.h>
#include <string.h>

char set_data[1000][101], data[10001];
int flag[10000] = { 0, };

int main() {
	int n, q, i, j;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) scanf_s("%s", set_data[i], sizeof(set_data[i]));
	scanf_s("%d", &q);
	for (i = 0; i < q; i++) {
		scanf_s("%s", data, sizeof(data));
		for (j = 0; j < n; j++) {
			const char* result = strstr(data, set_data[j]);
			if (result != NULL) {
				flag[i] = 1;
				break;
			}
		}
	}
	for (i = 0; i < q; i++) {
		if (flag[i] == 1) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}