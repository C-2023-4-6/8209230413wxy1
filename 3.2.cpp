#include<iostream>
using namespace std;
bool is_prime(int a);
int main()
{
	int c,d=0;
	cout << "������һ����" << endl;
	cin >> c;
	if (is_prime(c) == 1||c==2)//����2ҲΪ���������������뺯������
	{
		cout << "����Ϊ����" << endl;
	}
	else
	{
		cout << "������Ϊ����" << endl;
	}
	for(int e=2;d<200;e++)//���200�ڵ�����
	{
		if (is_prime(e) == 1)
		{
			d++;
				cout << e<<" ";
				if (d % 10 == 0)
				{
					cout << endl;
			}
		}
	}
}


bool is_prime(int num)
{
	int b=0;
	for (int k = num - 1; k != 1 && num % k != 0; k--)
	{
		b = k;
	}//��num���numС������� ��������������ܰ�����������+1 �������2���ж����������ݣ�
	if (b - 1 == 1)
	{
		return 1;
	}//�ж���������Ƿ�Ϊ2
	else 
	{
		return 0;
	}
}