#include <stdio.h>

// �����ε� :: "�Լ� �ߺ� ����"
// �Լ� ���� :: int�� ���� ���� ������� return�ϴ� �Լ� 3��
int plus() {		// �Ű������� ���°ɷ�
	return 1 + 1;		// 2 ��ȯ
}
int plus(int n1) {		// �Ű������� 1�� ����
	return n1 + 1;		// n1 + 1�� ��ȯ
}
int plus(int n1, int n2) {	// �Ű������� 2�� ���� (2���� ���� ��û)
	return n1 + n2;
}

int main() {
	// 2���� ������ �ִµ�, 2�� ������ �̸��� �����ϰ� ������ �� �ִ� (X)
	//		-> ������ ���� �ߺ����� (X)
	/*int a = 5;
	int a = 10;
	printf("%d", &a);*/

	printf("���� ��� :: %d\n", plus());		// ù��° �Լ� ���
	printf("���� ��� :: %d\n", plus(10));		// ��� :: 11, �ι�° �Լ� ���
	printf("���� ��� :: %d", plus(15, 30));	// ��� :: 45, ����° �Լ� ���
}