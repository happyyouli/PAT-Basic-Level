#include <cstdio>
#include <cmath>
bool judgePrime(int num) {//判断素数
	if (num == 2) return true;
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) return false;
	}
	return true;
}

int main() {
	int N, count = 0;
	scanf_s("%d", &N);
	int pre = 2, next = 2;//存放相邻的两个素数
	for (int i = 2; i <= N; i++) {
		if (judgePrime(i)) {
			pre = next;
			next = i;
			if (next - pre == 2) count++;
		}
	}
	printf("%d", count);
	return 0;
}

/*
输入格式:
输入在一行给出正整数N。

输出格式:
在一行中输出不超过N的满足猜想的素数对的个数。

输入样例:
20
输出样例:
4
*/
