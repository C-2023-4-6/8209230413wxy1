#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;

int parseHex(const char* const hexString)
{
	int len = strlen(hexString);//��ȡ�ַ�������
	int n;
	int m = 0;
	for (int i = 1, j = len - 1; j!=-1; i++, j--)//��ĩλȡ��������ǰȡ�ַ�
	{
		if (int(hexString[j]) >64)//��ĩλASCII�����64��Ϊ��ĸ ����ǿ��ת���빫ʽת����ʮ����
		{
			n = int(hexString[j]) - 55;
			m = pow(16, i - 1) * n + m;
		}
		else//��ASCII��С��64��Ϊ���� ����ǿ��ת���빫ʽת����ʮ���� 
		{
			n = int(hexString[j]) - 48;
			m = pow(16, i - 1) * n + m;
		}

	}
	
	return m;

}


int main()
{
	const int maxlength = 100;
	char s1[maxlength];//����һ���ַ���
	cout << "�����ַ���s1:";
	cin.getline(s1, maxlength);
	const char* a = s1;//��ָ��ָ����ַ���
	cout <<parseHex(a)<<endl;//��������ָ�벢�����ֵ

}