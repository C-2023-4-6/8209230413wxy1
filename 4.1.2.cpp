#include<iostream>

using namespace std;
double maopao(double list[10])
{
	int c;
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j <9; j++)
			if (list[j] > list[j + 1])
			{
				c = list[j];
				list[j] = list[j + 1];
				list[j + 1] = c;
				changed = true;
			}
	} while (changed);//冒泡排序
	for (int i = 0; i < 10; i++)
	{
		cout << list[i] << " ";
	}//输出排列好的数列
	return 0;
}
int main()
{
	const int listSize = 10;
	double list[listSize];
	for (int i = 0; i < 10; i++)
	{
		cin >> list[i];
	}//输入数列
	maopao(list);

}
