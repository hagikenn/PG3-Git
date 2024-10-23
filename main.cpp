#include<stdio.h>
#include<windows.h>
#include<stdlib.h>


typedef void(*PFunc)(int*, int, int);

void DispResult(int* s, int dice, int playerNumber) {
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

}

void SetTimeOut(PFunc P, int second, int dice, int playerNumber) {
	Sleep(second *= 600);
	P(&second, dice, playerNumber);
}

int main() {
	int playerNumber = 0;
	int dice = 0;
	printf("半なら0,丁なら1と入力せよ\n");
	printf("半か丁か : ");
	scanf_s("%d", &playerNumber);
	printf("\n");
	PFunc P;
	dice = rand() % 6 + 1;
	P = DispResult;
	SetTimeOut(P, 5, dice, playerNumber);


	return 0;
}