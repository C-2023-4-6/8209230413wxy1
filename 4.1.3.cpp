#include<iostream>
using namespace std;
int main()
{
	bool a[100] = {};//��100�����ӳ�����Ϊ�ر�״̬��0��
	for (int k = 0; k < 100; k++) //��һ��ѧ��ȫ����
	{
		a[k] = !a[k];
	}
	for (int i = 1; i < 100; i++)//ʣ��99��ѧ������
	{
		for (int j = i; j < 100; j =j+i+2)
		{
			a[j] = !a[j];
		}
	}
	for (int i = 0; i < 100; i++)//������ŵĹ������
	{
		if (a[i] == 1)
		{
			cout << i+1 << " ";
		}
	}
}