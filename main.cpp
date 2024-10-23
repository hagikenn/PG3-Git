#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<functional>


typedef void(*PFunc)(int*);

void DispResult(int* s) {}

void SetTimeOut(PFunc P, int second) {
	Sleep(second *= 600);
	P(&second);
}

int main() {
	int playerNumber = 0;
	std::function<void(void)>hantyo = [=]() {
		int dice = rand() % 6 + 1;
		int answer;
		answer = dice % 2;
		if (answer == playerNumber) {
			printf("dice=%d\n", dice);
			printf("正解\n");
		}
		else {
			printf("dice=%d\n", dice);
			printf("不正解\n");
		}
		};
	printf("半なら0,丁なら1と入力せよ\n");
	printf("半か丁か : ");
	scanf_s("%d", &playerNumber);
	printf("\n");
	PFunc P;
	P = DispResult;
	SetTimeOut(P, 5);
	hantyo();

	return 0;
}