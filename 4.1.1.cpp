#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int b[10] = {};
	for (int c = 0; c< 10; c++)
	{
		cin >> a[c];//��ʼ������
	}
	for (int d = 0; d < 10; d++)
	{
		if(a[d]==0)
		{
			cout << 0 << " ";//�ж��������Ƿ���0 ������� ��������
			break;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 1; j < 10-i; j++)
		{
			if (a[i] == a[i + j])
			{
				b[i] =a[i] ;//���������ظ���Ԫ�ش洢����һ������
			}
		}
		
		if (b[i] == a[i])
		{
			a[i] = 0;//���ظ�Ԫ���г������һ������ֵΪ0
		}
	}
	
	for (int k = 0; k < 10; k++)
	{
		if (a[k] != 0)
		{
			cout << a[k] << " ";//�жϲ�Ϊ0��Ԫ�����
		}
	}
	
}