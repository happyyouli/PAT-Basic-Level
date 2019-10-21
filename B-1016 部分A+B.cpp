#include <iostream>
using namespace std;

int get_P(int A, int DA) {
	int i = 1;
	int temp;
	int PA = 0;
	while (A) {
		temp = A % 10;
		A /= 10;
		if (temp == DA) {
			PA += temp * i;
			i *= 10;
		}
	}
	return PA;
}

int main() {
	int A, DA, B, DB;
	cin >> A >> DA >> B >> DB;
	cout << get_P(A, DA) + get_P(B, DB);
}

/*
输入样例 1：
3862767 6 13530293 3
输出样例 1：
399
输入样例 2：
3862767 1 13530293 8
输出样例 2：
0
*/
