#include <cstdio>
#include <cstring>
void outJudge(const char s[101]) {//输出一个字符串是否为通过
	bool judge = true;
	int countP = 0, countA = 0, countT = 0;
	int posP = 0, posT = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == 'P') countP++;
		else if (s[i] == 'A') countA++;
		else if (s[i] == 'T')countT++;
		else {
			judge = false;
			break;
		}
	}
	if (countP != 1 || countT != 1 || countA == 0)
		judge = false;
	if (judge == false)
		printf("NO\n");
	else {//字符串包含一个P，一个T，若干个A，且不包含别的字符
		for (int i = 0; i < strlen(s); i++) {
			if (s[i] == 'P') posP = i;
			if (s[i] == 'T') posT = i;
		}
		int a, b, c;
		a = posP;
		b = posT - posP - 1;
		c = strlen(s) - posT - 1;
		if (a * b == c)//重点是这儿，判断是否通过
			printf("YES\n");
		else printf("NO\n");
	}
}
int main(){
	char input[10][101];
	int N = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%s", input[i]);
	for (int i = 0; i < N; i++)
		outJudge(input[i]);
	return 0;
}

/*
答案正确”是自动判题系统给出的最令人欢喜的回复。本题属于 PAT 的“答案正确”大派送 —— 只要读入的字符串满足下列条件，系统就输出“答案正确”，否则输出“答案错误”。

得到“答案正确”的条件是：

字符串中必须仅有 P、 A、 T这三种字符，不可以包含其它字符；
任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a、 b、 c 均或者是空字符串，或者是仅由字母 A 组成的字符串。
现在就请你为 PAT 写一个自动裁判程序，判定哪些字符串是可以获得“答案正确”的。

输入格式：
每个测试输入包含 1 个测试用例。第 1 行给出一个正整数 n (<10)，是需要检测的字符串个数。接下来每个字符串占一行，字符串长度不超过 100，且不包含空格。

输出格式：
每个字符串的检测结果占一行，如果该字符串可以获得“答案正确”，则输出 YES，否则输出 NO。

输入样例：
8
PAT
PAAT
AAPATAA
AAPAATAAAA
xPATx
PT
Whatever
APAAATAA
输出样例：
YES
YES
YES
YES
NO
NO
NO
NO
*/
