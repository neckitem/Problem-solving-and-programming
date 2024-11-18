#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	char B[1001];
	int N, len, i, sum = 0, Index;
	scanf("%s %d", B, &N);
	len = strlen(B);
	for (i = 0; i < len; i++) {
		Index = len - i - 1;
		if (B[Index] >= 'A' && B[Index] <= 'Z') sum += (pow(N, i) * (B[Index] - 55));
		else if(B[Index] >= '0' && B[Index] <= '9') sum += (pow(N, i) * (B[Index] - 48));
	}
	printf("%d", sum);

	return 0;
}