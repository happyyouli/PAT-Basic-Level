#include <cstdio>
#include <cmath>
int main() {
	int n, input;
	int a1 = 0, a2 = 0, a3 = 0, a5 = 0;
	float a4 = 0;
	int count[5] = { 0 };//计数
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &input);
		if (input % 5 == 0) {
			if (input % 2 == 0) {
				count[0]++;
				a1 += input;
			}	
		}
		else if (input % 5 == 1) {
			count[1]++;
			a2 += pow(-1, count[1] + 1) * input;
		}
		else if (input % 5 == 2) {
			count[2]++;
			a3++;
		}
			
		else if (input % 5 == 3) {
			count[3]++;
			a4 += input;
		}
		else {
			count[4]++;
			a5 = a5 > input ? a5 : input;
		}
	}
	if (count[0])
		printf("%d ", a1);
	else printf("N ");
	if (count[1])
		printf("%d ", a2);
	else printf("N ");
	if (count[2])
		printf("%d ", a3);
	else printf("N ");
	if (count[3])
		printf("%.1f ", a4/count[3]);
	else printf("N ");
	if (count[4])
		printf("%d", a5);
	else printf("N");
	return 0;
}

/*
给定一系列正整数，请按要求对数字进行分类，并输出以下 5 个数字：
输入样例 1：
13 1 2 3 4 5 6 7 8 9 10 20 16 18
输出样例 1：
30 11 2 9.7 9
输入样例 2：
8 1 2 4 5 6 7 9 16
输出样例 2：
N 11 2 N 9
*/
