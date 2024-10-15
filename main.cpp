#include<stdio.h>

int Recursive(int Rhw, int hw,int timer, int RhwResult, int hwResult) {
	//一般の合計金額
	hwResult = hw * timer;

	//再帰の合計金額
	RhwResult +=  Rhw;

	if (hwResult <= RhwResult) {
		printf("再帰のお金と時間  お金=%d,時給=%d,時間=%d\n", RhwResult, Rhw, timer);
		printf("一般のお金と時間  お金=%d,時給=%d,時間=%d\n", hwResult, hw, timer);

		return 0;
	}else {
		printf("再帰のお金と時間  お金=%d,時給=%d,時間=%d\n", RhwResult, Rhw, timer);
		printf("一般のお金と時間  お金=%d,時給=%d,時間=%d\n\n", hwResult, hw, timer);
		return Recursive(Rhw * 2 - 50, hw, timer + 1, RhwResult, hwResult);
	}
	
}


int main() {
	int Rhw = 100;//再帰 時給
	int hw = 1072;//一般的 hourly wage(時給)
	int timer = 1;//時間（比べるのに使う）

	int RhwResult = 0;//再帰の計算結果
	int hwResult = 0;//一般の計算結果

	Recursive(Rhw,hw,timer, RhwResult, hwResult);

	return 0;
}