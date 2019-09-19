#include <stdio.h> 
int main()
{
	char input[81];
	int space[40] = { 0 };//记录空格的位置
	int j = -1;
	scanf("%[^\n]", input); //读到'\n'结束读取
	for (int i = 0; input[i] != '\0'; i++)//统计空格所在位置
		if (input[i] == ' ')
			space[++j] = i;
	if (j < 0) 
		printf("%s", input);//j<0表示只有一个单词
	else {
		for (int i = space[j] + 1; input[i] != '\0'; i++)//输出最后一个单词
			printf("%c", input[i]);
		printf(" ");
		for (j--; j >= 0; j--) {//倒序输出其余空格后的单词
			for (int i = space[j] + 1; input[i] != ' '; i++)
				printf("%c", input[i]);
			printf(" ");
		}
		for (int i = 0; input[i] != ' '; i++)//输出第一个单词
			printf("%c", input[i]);
	}
	return 0;
}

/*
给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。

输入格式：
测试输入包含一个测试用例，在一行内给出总长度不超过 80 的字符串。字符串由若干单词和若干空格组成，其中单词是由英文字母（大小写有区分）组成的字符串，单词之间用 1 个空格分开，输入保证句子末尾没有多余的空格。

输出格式：
每个测试用例的输出占一行，输出倒序后的句子。

输入样例：
Hello World Here I Come
输出样例：
Come I Here World Hello
*/
