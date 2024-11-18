#include <stdio.h>
#include <string.h>

int main() {
	char subject[51], grade1[3];
	float grade2, grade_sum = 0, sum = 0;
	for (int i = 0; i < 20; i++) {
		scanf_s("%s %f %s", &subject, &grade2, &grade1, sizeof(subject));
		if (grade1[0] == 'P') continue;
		else if (strcmp(grade1, "A+") == 0) grade_sum += 4.5 * grade2;
		else if (strcmp(grade1, "A0") == 0) grade_sum += 4.0 * grade2;
		else if (strcmp(grade1, "B+") == 0) grade_sum += 3.5 * grade2;
		else if (strcmp(grade1, "B0") == 0) grade_sum += 3.0 * grade2;
		else if (strcmp(grade1, "C+") == 0) grade_sum += 2.5 * grade2;
		else if (strcmp(grade1, "C0") == 0) grade_sum += 2.0 * grade2;
		else if (strcmp(grade1, "D+") == 0) grade_sum += 1.5 * grade2;
		else if (strcmp(grade1, "D0") == 0) grade_sum += 1.0 * grade2;
		else if (grade1[0] == 'F') grade_sum += 0 * grade2;
		sum += grade2;
	}
	printf("%f", grade_sum / sum);


	return 0;
}