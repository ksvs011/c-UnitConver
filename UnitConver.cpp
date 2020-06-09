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
		printf("단위변환하는 프로그램입니다.\n");
		printf("(1) inch -> cm\n");
		printf("(2) cm -> inch\n");
		rs = scanf("%d", &menuNum);
		if (menuNum == 0) {
			printf("0을입력하셨군요. 프로그램을종료겠습니다.");
			break;
		}
		if (menuNum != 1 && menuNum != 2) {
			printf("메뉴 1 또는 2중에 선택하세요.\n");
			continue;
		}
		while (1) {
			printf("양수를 입력해주세요.\n");
			rs = scanf("%d", &inputNum);
			if (rs == 0) break;
			system("cls");
			if (inputNum == 0) {
				printf("0을입력하셨군요. 메뉴를 다시 선택하세요.");
				break;
			}
			if (inputNum < 0) {
				printf("양수를 입력해주세요.");
				continue;
			}

			if (menuNum == 1) {
				printf("%dinch는 %lfcm입니다.\n", inputNum, inputNum * 2.54);
			}
			else if (menuNum == 2) {
				printf("%dcm는 %lfinch입니다.\n", inputNum, inputNum * 0.393701);
			}
		}
	}

	return 0;
}

