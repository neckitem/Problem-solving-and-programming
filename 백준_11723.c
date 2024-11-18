#include <stdio.h>
#include <string.h>

int main() {
	char a[7];
	int S[21] = { 0, }, temp, num;
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf_s("%s", &a, sizeof(a));
		if (strcmp(a, "add") == 0) {
			scanf_s("%d", &temp);
			S[temp] = 1;
		}
		else if (strcmp(a, "remove") == 0) {
			scanf_s("%d", &temp);
			S[temp] = 0;
		}
		else if (strcmp(a, "check") == 0) {
			scanf_s("%d", &temp);
			printf("%d\n", S[temp]);
		}
		else if (strcmp(a, "toggle") == 0) {
			scanf_s("%d", &temp);
			if (S[temp] == 0) S[temp] = 1;
			else S[temp] = 0;
		}
		else if (strcmp(a, "all") == 0) {
			for(int j = 1;j<21;j++) S[j] = 1;
		}
		else if (strcmp(a, "empty") == 0) {
			for (int j = 1; j < 21; j++) S[j] = 0;
		}
	}

	return 0;
}