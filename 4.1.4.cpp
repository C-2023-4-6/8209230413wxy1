#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0,j=0,k=0; i < size1&&j<size2; )//将数组1最小的数与数组2最小的数比较并将较小数存入数组3
	//直至数组1或数组2的元素被存完就讲另一个数组剩余元素全部向后存储进去
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
	cout << "排列后的数组是：" << endl;//输出排列后的数组
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
	cout << "输入第一个数组元素个数" << endl;
	cin >> size1;
	cout << "输入第一个数组元素" << endl;
	for (int i = 0; i < size1; i++)
	{
		cin >>list1[i];
	}

	cout << "输入第二个数组元素个数" << endl;
	cin >> size2;
	cout << "输入第二个数组元素" << endl;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	merge(list1, size1, list2, size2, list3);
}