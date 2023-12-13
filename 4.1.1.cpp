#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int b[10] = {};
	for (int c = 0; c< 10; c++)
	{
		cin >> a[c];//初始化数组
	}
	for (int d = 0; d < 10; d++)
	{
		if(a[d]==0)
		{
			cout << 0 << " ";//判断数组里是否有0 有则输出 无则跳过
			break;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 1; j < 10-i; j++)
		{
			if (a[i] == a[i + j])
			{
				b[i] =a[i] ;//将数组中重复的元素存储到另一个数组
			}
		}
		
		if (b[i] == a[i])
		{
			a[i] = 0;//将重复元素中除了最后一个都赋值为0
		}
	}
	
	for (int k = 0; k < 10; k++)
	{
		if (a[k] != 0)
		{
			cout << a[k] << " ";//判断不为0的元素输出
		}
	}
	
}