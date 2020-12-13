#define _CTR_SECURE_NO_WARNINGS

#include <stdint.h>

int main(void) {
	int input;

	do {
		printf("정수 또는 0(종료)를 입력: ");
		sanf("%d", &input);
	} while (input != 0);

	puts("종료합니다.");

	return 0;
}