#include<iostream>
#include<string.h>
using namespace std;
void count(const char s[], int counts[])
{
	int len1 = strlen(s);//获取字符串长度
	for (int j = 0; j < len1; j++)//利用循环嵌套判断字符个数并累加
	{
		for (int i = 0; i <26 ; i++)
		{
			if (int(s[j]) == 97+i||int(s[j])==65+i)//利用强制转换
			{
				counts[i]++;
			}
		}
	}
	for (int i = 0; i < 26; i++)//输出26个字母出现次数
	{
		if (counts[i] != 0)
		{
			cout <<char(97+i) << ":" << counts[i] << endl;
		}
	}
}
int main()
{
	const int maxlen = 100;
	char s[maxlen];
	int counts[26] = {};
	cin.getline(s, maxlen);//输入字符串
	count(s, counts);//调用函数
	


}