#define _CTR_SECURE_NO_WARNINGS

#include <stdint.h>

int main(void) {
	int input;

	do {
		printf("���� �Ǵ� 0(����)�� �Է�: ");
		sanf("%d", &input);
	} while (input != 0);

	puts("�����մϴ�.");

	return 0;
}