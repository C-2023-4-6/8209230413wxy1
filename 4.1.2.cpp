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
	} while (changed);//ð������
	for (int i = 0; i < 10; i++)
	{
		cout << list[i] << " ";
	}//������кõ�����
	return 0;
}
int main()
{
	const int listSize = 10;
	double list[listSize];
	for (int i = 0; i < 10; i++)
	{
		cin >> list[i];
	}//��������
	maopao(list);

}
