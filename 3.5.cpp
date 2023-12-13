#include<iostream>
using namespace std;
int malou(int a)
{
	int k;
	if (a==1)
	{
		k = 1;
	}
	else
	{
		
		k = 2 * (malou(a - 1)+1);
	}//用递归函数求猴子吃的桃子数
	return k;
}
int main()
{
	int a=10;//a表示猴子能吃的天数
	cout <<"吗喽摘了" << malou(a)<<"个桃子";


}