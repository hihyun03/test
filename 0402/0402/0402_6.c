#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// ������ :: "���� ��ȣ"
	// ���Կ�����(1) :: =
	// ���������(5) :: +, -, *, /, %
	//		/(������ :: �� ��ȯ), %(������ :: ������ ��ȯ)

	// 1. 2���� ���ڸ� �Է¹ް�
	int a, b;

	scanf("%d %d", &a, &b);

	// 2. 5���� ���� ����� ���������� ����϶� (+, -, *, /, %)
	//printf("%d\n", a + b);
	//printf("%d\n", a - b);
	//printf("%d\n", a * b);
	//printf("%d\n", a / b);
	//printf("%d\n", a % b);

	printf("%d\n%d\n%d\n%d\n%d", a + b, a - b, a * b, a / b, a % b);
}