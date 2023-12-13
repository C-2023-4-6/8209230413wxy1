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
	}//使得m是较大数
	
	for (b = n;m % b != 0 ||n % b != 0;b--)
	{
		c = b;
	}
	m = c-1;//求最大公因数（从较小数开始依次减一相除 直到两数都能整除为止
	return m;
}
int &b(int m, int n)
{
	int d = a(m, n);
	 m= d * (m / d) * (n / d);
	return m;
}//求最小公倍数
int main()
{
	int m, n;
	cout << "您输入的两个数为" << endl;
	cin >> m>>n;
	int i= a(m, n);
	int j = b(m, n);	
	cout << "两数最大公约数为" << i << endl;
	cout << "两数最小公倍数为" << j << endl;





}