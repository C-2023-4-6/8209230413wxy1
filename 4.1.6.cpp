#include<iostream>
#include<string.h>
using namespace std;
void count(const char s[], int counts[])
{
	int len1 = strlen(s);//��ȡ�ַ�������
	for (int j = 0; j < len1; j++)//����ѭ��Ƕ���ж��ַ��������ۼ�
	{
		for (int i = 0; i <26 ; i++)
		{
			if (int(s[j]) == 97+i||int(s[j])==65+i)//����ǿ��ת��
			{
				counts[i]++;
			}
		}
	}
	for (int i = 0; i < 26; i++)//���26����ĸ���ִ���
	{
		if (counts[i] != 0)
		{
			cout <<char(97+i) << ":" << counts[i] << endl;
		}
	}
}
int main()
{
	const int maxlen = 100;
	char s[maxlen];
	int counts[26] = {};
	cin.getline(s, maxlen);//�����ַ���
	count(s, counts);//���ú���
	


}