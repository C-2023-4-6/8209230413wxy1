#include<iostream>
using namespace std;
int main()
{
	bool a[100] = {};//将100个柜子初定义为关闭状态（0）
	for (int k = 0; k < 100; k++) //第一个学生全打开了
	{
		a[k] = !a[k];
	}
	for (int i = 1; i < 100; i++)//剩下99个学生操作
	{
		for (int j = i; j < 100; j =j+i+2)
		{
			a[j] = !a[j];
		}
	}
	for (int i = 0; i < 100; i++)//输出开着的柜子序号
	{
		if (a[i] == 1)
		{
			cout << i+1 << " ";
		}
	}
}