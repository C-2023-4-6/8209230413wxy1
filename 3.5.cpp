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
	}//�õݹ麯������ӳԵ�������
	return k;
}
int main()
{
	int a=10;//a��ʾ�����ܳԵ�����
	cout <<"���ժ��" << malou(a)<<"������";


}