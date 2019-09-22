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
	int m, n, count = 0, outCount = 0;
	scanf("%d %d", &m, &n);
	for (int i = 2; count <= n; i++) {
		if (judgePrime(i)) {
			count++;//count表示素数个数
			if (count >= m && count <= n) {
				outCount++;//outCount表示在（m, n）范围内素数个数
				if (outCount == 1)
					printf("%d", i);
				else if (outCount % 10 == 1)
					printf("\n%d", i);
				else printf(" %d", i);
			}	
		}
	}
	return 0;
}

/*
令 P^i 表示第 i 个素数。现任给两个正整数 M≤N≤10^4，请输出 P^M到 P^N的所有素数。

输入格式：
输入在一行中给出 M 和 N，其间以空格分隔。

输出格式：
输出从 P^M到 P^N的所有素数，每 10 个数字占 1 行，其间以空格分隔，但行末不得有多余空格。

输入样例：
5 27
输出样例：
11 13 17 19 23 29 31 37 41 43
47 53 59 61 67 71 73 79 83 89
97 101 103
*/
