s1 = input()
s2 = input()
s3 = input()
s4 = input()
for i in range(min(len(s1),len(s2))):
    if (s1[i] == s2[i] and s1[i] <= 'G' and s1[i] >= 'A'):
        char1 = s1[i]
        break
for j in range(i + 1, min(len(s1),len(s2))):
    if (s1[j] == s2[j] and s1[j] <= 'N'):
        char2 = s1[j]
        break
for k in range(min(len(s3), len(s4))):
    if(s3[k] == s4[k] and s3[k] >= 'A'):
        char3 = k
        break
week = ["MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"]
print(week[ord(char1) - ord('A')], end = " ")
print("0%s" % char2 if char2 < 'A' else ord(char2) - ord('A') + 10, end = ":")
print(char3 if char3 > 9 else "0%d" % char3, end = '')

'''
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
'''
