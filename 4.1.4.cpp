#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0,j=0,k=0; i < size1&&j<size2; )//������1��С����������2��С�����Ƚϲ�����С����������3
	//ֱ������1������2��Ԫ�ر�����ͽ���һ������ʣ��Ԫ��ȫ�����洢��ȥ
	{
		if (list1[i] > list2[j])
		{
			list3[k] = list2[j];
			j++; 
			k++;
			if (j == size2)
			{
				for (; i < size1; i++)
				{
					list3[k] = list1[i];
					k++;
				}
				
			}
		}
		else
		{
			list3[k] = list1[i];
				i++;
			k++;
			if (i == size1)
			{
				for (; j < size2; j++)
				{
					list3[k] = list2[j];
					k++;
				}
				
			}
		}
	}
	cout << "���к�������ǣ�" << endl;//������к������
	for (int a = 0; a < size1 + size2; a++)
	{
		cout << list3[a] << " ";
	}
}
int main()
{
	
	const int maxsize=80;
	int size1, size2;
	int list1[maxsize], list2[maxsize],list3[maxsize*2];
	cout << "�����һ������Ԫ�ظ���" << endl;
	cin >> size1;
	cout << "�����һ������Ԫ��" << endl;
	for (int i = 0; i < size1; i++)
	{
		cin >>list1[i];
	}

	cout << "����ڶ�������Ԫ�ظ���" << endl;
	cin >> size2;
	cout << "����ڶ�������Ԫ��" << endl;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	merge(list1, size1, list2, size2, list3);
}