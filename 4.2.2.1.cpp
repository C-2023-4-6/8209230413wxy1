#include<iostream>
#include <string.h>
using namespace std;
int indexOf(const char* s1, const char* s2)
{
	int len1 = strlen(s1);//取字符串s1长度
	int len2 = strlen(s2);//取字符串s2长度
	for (int a = 0, b = 0; a < len2; a++)
	{
		if (s1[b] == s2[a])//寻找s1第一个字符与s2相同的点位
		{
			int c = a;//获取该点位位置
			for (; b < len1; b++, a++)//逐一向后对应
			{
				if (s1[b] != s2[a])//若出现字符不一致的情况终结内层循环进入下一个外层循环寻找下一个点位
				{
					b = 0;
					break;
				}
			}
			if (b == len1)//若字符完全一致 用跳出循环时b的值与len1相等判断输出第一个字符位置
			{
				return c;
			}
			else
			{
				a = c;
				a++;
			}
		}
	}
	return -1;//跳出循环输出-1
}
int main()
{
	const int maxlength = 100;
	char s1[maxlength], s2[maxlength];
	cout << "输入字符串s1:";
	cin.getline(s1, maxlength);
	cout << "输入字符串s2:";
	cin.getline(s2, maxlength);
	const char* a =s1;
	const char* b =s2;
	cout << indexOf(a,b);//输入两字符串地址
}