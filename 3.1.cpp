#include<iostream>
using namespace std;
int &a(int m, int n)
{
	int q, c,b;
	if (n > m)
	{
		q = m;
		m = n;
		n = q;
	}//ʹ��m�ǽϴ���
	
	for (b = n;m % b != 0 ||n % b != 0;b--)
	{
		c = b;
	}
	m = c-1;//������������ӽ�С����ʼ���μ�һ��� ֱ��������������Ϊֹ
	return m;
}
int &b(int m, int n)
{
	int d = a(m, n);
	 m= d * (m / d) * (n / d);
	return m;
}//����С������
int main()
{
	int m, n;
	cout << "�������������Ϊ" << endl;
	cin >> m>>n;
	int i= a(m, n);
	int j = b(m, n);	
	cout << "�������Լ��Ϊ" << i << endl;
	cout << "������С������Ϊ" << j << endl;





}