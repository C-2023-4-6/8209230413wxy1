#include<iostream>
using namespace std;
void maopao(int *list,int n)//���������ַ������ĳ���
{
	 int c;
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < n-1; j++)
			if (list[j] > list[j + 1])
			{
				c = list[j];
				list[j] = list[j + 1];
				list[j + 1] = c;
				changed = true;
			}
	} while (changed);
	
}
int main()
 {
	    int n;   //�������鳤��
	    cin >> n;//�������鳤��
	      
	    int *p = new int[n]; //����һ����̬���鲢��ָ��ָ�������ĵ�һλ��ַ
		for (int i = 0; i < n; ++i)
		{
			cin >> p[i];//��������Ԫ��
		}
		maopao(p,n);//���ú���
		for (int i = 0; i < n;++i)
		{
			cout << p[i] << " ";//�������������
		}
		cout << endl;
	    delete[]p;  //�ͷŶ�̬����
		
	   return 0;
	 }

 