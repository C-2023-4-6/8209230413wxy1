#include<iostream>
#include <string.h>
using namespace std;
int indexOf(const char* s1, const char* s2)
{
	int len1 = strlen(s1);//ȡ�ַ���s1����
	int len2 = strlen(s2);//ȡ�ַ���s2����
	for (int a = 0, b = 0; a < len2; a++)
	{
		if (s1[b] == s2[a])//Ѱ��s1��һ���ַ���s2��ͬ�ĵ�λ
		{
			int c = a;//��ȡ�õ�λλ��
			for (; b < len1; b++, a++)//��һ����Ӧ
			{
				if (s1[b] != s2[a])//�������ַ���һ�µ�����ս��ڲ�ѭ��������һ�����ѭ��Ѱ����һ����λ
				{
					b = 0;
					break;
				}
			}
			if (b == len1)//���ַ���ȫһ�� ������ѭ��ʱb��ֵ��len1����ж������һ���ַ�λ��
			{
				return c;
			}
			else
			{
				a = c;
				a++;
			}
		}
	}
	return -1;//����ѭ�����-1
}
int main()
{
	const int maxlength = 100;
	char s1[maxlength], s2[maxlength];
	cout << "�����ַ���s1:";
	cin.getline(s1, maxlength);
	cout << "�����ַ���s2:";
	cin.getline(s2, maxlength);
	const char* a =s1;
	const char* b =s2;
	cout << indexOf(a,b);//�������ַ�����ַ
}