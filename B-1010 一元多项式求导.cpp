#include <cstdio>
int main() {
	int factor = 0, index = 0, count = 0;
	scanf("%d %d", &factor, &index);
	if (factor == 0) {
		printf("0 0");
		count++;
	}
	else {
		if (index != 0) {
			printf("%d %d", factor * index, index - 1);
			count++;
		}	
		while (scanf("%d %d", &factor, &index) != EOF)//遇到回车结束循环
			if (index != 0) {
				printf(" %d %d", factor * index, index - 1);
				count++;
			}	
	}
	if (count == 0)//count表示输出的数对个数，若为0，则一定是只输入了一个指数为0的项
		printf("0 0");
	return 0;
}

/*
设计函数求一元多项式的导数。

输入格式:
以指数递降方式输入多项式非零项系数和指数（绝对值均为不超过 1000 的整数）。数字间以空格分隔。

输出格式:
以与输入相同的格式输出导数多项式非零项的系数和指数。数字间以空格分隔，但结尾不能有多余空格。注意“零多项式”的指数和系数都是 0，但是表示为 0 0。

输入样例:
3 4 -5 2 6 1 -2 0
输出样例:
12 3 -10 1 6 0
*/
