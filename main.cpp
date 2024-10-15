#include<stdio.h>

int Recursive(int n) {
	if (n <= 1) {
		return(1);
	}
	return(n * Recursive(n - 1));
}

int main() {
	int n = 10;//階乗する値
	int result;//計算結果

	result = Recursive(n);
	printf("%dの階乗 = %d\n",n,result);

	return 0;
}