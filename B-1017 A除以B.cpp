#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
	string input; //被除数
	cin >> input;
	int B; //除数
	cin >> B;
	stack<int> S; //存放每次计算的余数
	S.push(0);
	string Q = ""; //商
	
	for (int i = 0; i < input.length(); i++) {
		int temp = S.top() * 10 + (input[i] - '0');
		Q.push_back('0' + temp / B);	
		S.pop();
		S.push(temp % B);
	}
	int R = S.top();

	if (Q[0] == '0' && Q.length() > 1) {
		for (int i = 1; Q[i] != '\0'; i++) {
			cout << Q[i];
		}
	}
	else cout << Q;
	cout << " " << R;
}

/*
本题要求计算 A/B，其中 A 是不超过 1000 位的正整数，B 是 1 位正整数。你需要输出商数 Q 和余数 R，使得 A=B×Q+R 成立。

输入格式：
输入在一行中依次给出 A 和 B，中间以 1 空格分隔。

输出格式：
在一行中依次输出 Q 和 R，中间以 1 空格分隔。

输入样例：
123456789050987654321 7
输出样例：
17636684150141093474 3
*/
