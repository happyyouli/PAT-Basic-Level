#include <iostream>
using namespace std;
void outputPinyin(int c);//输出单个数字对应的拼音

int main() {
	char input[102];
	int sum = 0, i = 0;
	cin >> input;
	while (input[i] != '\0') {
		sum += input[i] - '0';
		i++;
	} //得到输入数字串的和sum
	int sum1[4] = {0}, j = 0;
	do{
		sum1[j] = sum % 10;
		sum /= 10;
		j++;
	} while (sum != 0);
	//不用white循环的原因为：若sum为0，则j为0，最后一条输出语句数组越界
	for (j--; j > 0; j--) {//j--的原因为上一个循环末尾j多加了1
		outputPinyin(sum1[j]);
		cout << ' ';
	}
	outputPinyin(sum1[j]);
	system("pause");
	return 0;
}

void outputPinyin(int c) {
	switch (c) {
	case 1:
		cout << "yi"; break;
	case 2:
		cout << "er"; break;
	case 3:
		cout << "san"; break;
	case 4:
		cout << "si"; break;
	case 5:
		cout << "wu"; break;
	case 6:
		cout << "liu"; break;
	case 7:
		cout << "qi"; break;
	case 8:
		cout << "ba"; break;
	case 9:
		cout << "jiu"; break;
	case 0:
		cout << "ling";
	}
}
