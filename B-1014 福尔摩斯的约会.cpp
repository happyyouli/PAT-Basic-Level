#include <iostream>
#include <string>
using namespace std;
int main() {
	string s1, s2, s3, s4;
	char c1, c2;
	int c3;
	cin >> s1 >> s2 >> s3 >> s4;
	int i = 0;
	for (; i < s1.length() && i < s2.length(); i++)
		if (s1[i] == s2[i] && s1[i] <= 'G' and s1[i] >= 'A') {
			c1 = s1[i];
			break;
		}
	for (++i; i < s1.length() && i < s2.length(); i++)
		if (s1[i] == s2[i] && s1[i] <= 'N') {
			c2 = s1[i];
			break;
		}
	for(int j = 0; j < s3.length() && j < s4.length(); j++)
		if (s3[j] == s4[j] and s3[j] >= 'A') {
			c3 = j;
			break;
		}
	string week[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	cout << week[c1 - 'A'] << " ";
	if (c2 < 'A')
		cout << "0" << c2 << ":";
	else cout << c2 - 'A' + 10 << ":";
	if (c3 > 9) cout << c3;
	else cout << "0" << c3;
	return 0;
}

/*
大侦探福尔摩斯接到一张奇怪的字条：我们约会吧！ 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm。大侦探很快就明白了，字条上奇怪的乱码实际上就是约会的时间星期四 14:04，因为前面两字符串中第 1 对相同的大写英文字母（大小写有区分）是第 4 个字母 D，代表星期四；第 2 对相同的字符是 E ，那是第 5 个英文字母，代表一天里的第 14 个钟头（于是一天的 0 点到 23 点由数字 0 到 9、以及大写字母 A 到 N 表示）；后面两字符串第 1 对相同的英文字母 s 出现在第 4 个位置（从 0 开始计数）上，代表第 4 分钟。现给定两对字符串，请帮助福尔摩斯解码得到约会的时间。

输入格式：
输入在 4 行中分别给出 4 个非空、不包含空格、且长度不超过 60 的字符串。

输出格式：
在一行中输出约会的时间，格式为 DAY HH:MM，其中 DAY 是某星期的 3 字符缩写，即 MON 表示星期一，TUE 表示星期二，WED 表示星期三，THU 表示星期四，FRI 表示星期五，SAT 表示星期六，SUN 表示星期日。题目输入保证每个测试存在唯一解。

输入样例：
3485djDkxh4hhGE 
2984akDfkkkkggEdsb 
s&hgsfdk 
d&Hyscvnm
输出样例：
THU 14:04
*/
