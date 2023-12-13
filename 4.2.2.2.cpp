#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;

int parseHex(const char* const hexString)
{
	int len = strlen(hexString);//获取字符串长度
	int n;
	int m = 0;
	for (int i = 1, j = len - 1; j!=-1; i++, j--)//从末位取起，依次向前取字符
	{
		if (int(hexString[j]) >64)//若末位ASCII码大于64则为字母 利用强制转换与公式转换成十进制
		{
			n = int(hexString[j]) - 55;
			m = pow(16, i - 1) * n + m;
		}
		else//若ASCII码小于64则为数字 利用强制转换与公式转换成十进制 
		{
			n = int(hexString[j]) - 48;
			m = pow(16, i - 1) * n + m;
		}

	}
	
	return m;

}


int main()
{
	const int maxlength = 100;
	char s1[maxlength];//定义一个字符串
	cout << "输入字符串s1:";
	cin.getline(s1, maxlength);
	const char* a = s1;//用指针指向该字符串
	cout <<parseHex(a)<<endl;//函数输入指针并输出数值

}