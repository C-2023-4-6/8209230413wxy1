#include<iostream>
using namespace std;
bool is_prime(int a);
int main()
{
	int c,d=0;
	cout << "请输入一个数" << endl;
	cin >> c;
	if (is_prime(c) == 1||c==2)//补充2也为质数，将该数放入函数计算
	{
		cout << "该数为质数" << endl;
	}
	else
	{
		cout << "该数不为质数" << endl;
	}
	for(int e=2;d<200;e++)//输出200内的质数
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
	}//将num与比num小的数相除 若能整除则输出能把它整除的数+1 否则输出2（判断质数的依据）
	if (b - 1 == 1)
	{
		return 1;
	}//判断输出的数是否为2
	else 
	{
		return 0;
	}
}