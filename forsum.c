#include <stdio.h>

int main(void) {
	int i, sum;

	for (i = 1, sum = 0; i <= 10; i++)
		sum += i;
	printf("1���� 10���� ��: %3d\n", sum);
	for (i = 1, sum = 0; i <= 10; i++)
		sum += i++;
	printf("1���� 10���� ��: %3d\n", sum);
	for (i = 1, sum = 0; i <= 10; i++)
		sum += i+i;
	printf("1���� 9���� ��: %3d\n", sum);
	for (i = 1, sum = 0; i <= 10; i++)
		sum += i;
	printf("1���� 10���� ��: %3d\n", sum+=i++);

	return 0;
}