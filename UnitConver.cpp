#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h> 
#include <conio.h>

int main() {
	int inputNum = 0;
	int menuNum = 0;
	int rs = 1;

	while (1)
	{
		if (rs == 0) break;
		printf("������ȯ�ϴ� ���α׷��Դϴ�.\n");
		printf("(1) inch -> cm\n");
		printf("(2) cm -> inch\n");
		rs = scanf("%d", &menuNum);
		if (menuNum == 0) {
			printf("0���Է��ϼ̱���. ���α׷�������ڽ��ϴ�.");
			break;
		}
		if (menuNum != 1 && menuNum != 2) {
			printf("�޴� 1 �Ǵ� 2�߿� �����ϼ���.\n");
			continue;
		}
		while (1) {
			printf("����� �Է����ּ���.\n");
			rs = scanf("%d", &inputNum);
			if (rs == 0) break;
			system("cls");
			if (inputNum == 0) {
				printf("0���Է��ϼ̱���. �޴��� �ٽ� �����ϼ���.");
				break;
			}
			if (inputNum < 0) {
				printf("����� �Է����ּ���.");
				continue;
			}

			if (menuNum == 1) {
				printf("%dinch�� %lfcm�Դϴ�.\n", inputNum, inputNum * 2.54);
			}
			else if (menuNum == 2) {
				printf("%dcm�� %lfinch�Դϴ�.\n", inputNum, inputNum * 0.393701);
			}
		}
	}

	return 0;
}

