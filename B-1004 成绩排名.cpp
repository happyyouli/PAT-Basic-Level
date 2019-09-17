#include <iostream>
using namespace std;
int main() {
	struct info {//用结构体存放学生信息
		char name[11];
		char num[11];
		int grade;
	};
	info temp, max, min;
	int n = 0;
	cin >> n;
	cin >> temp.name >> temp.num >> temp.grade;
	max = temp;
	min = temp;
	n--;
	for (; n > 0; n--) {
		cin >> temp.name >> temp.num >> temp.grade;
		if (temp.grade > max.grade) max = temp;
		if (temp.grade < min.grade) min = temp;
	}
	cout << max.name << " " << max.num << endl;
	cout << min.name << " " << min.num;
	system("pause");
	return 0;
}
