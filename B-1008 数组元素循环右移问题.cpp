#include <cstdio>
int main() {
	int N, M;
	int input[100] = { 0 };
	scanf_s("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &input[(i+M)%N]);//直接按移位后的结果输入
	}
	printf("%d", input[0]);
	for (int i = 1; i < N; i++)
		printf(" %d", input[i]);
	return 0;
}

/*
输入格式:
每个输入包含一个测试用例，第1行输入N（1≤N≤100）和M（≥0）；第2行输入N个整数，之间用空格分隔。

输出格式:
在一行中输出循环右移M位以后的整数序列，之间用空格分隔，序列结尾不能有多余空格。

输入样例:
6 2
1 2 3 4 5 6
输出样例:
5 6 1 2 3 4
*/
