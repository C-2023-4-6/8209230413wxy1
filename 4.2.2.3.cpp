#include<iostream>
using namespace std;
void maopao(int *list,int n)//传入数组地址与数组的长度
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
	    int n;   //定义数组长度
	    cin >> n;//输入数组长度
	      
	    int *p = new int[n]; //定义一个动态数组并用指针指向改数组的第一位地址
		for (int i = 0; i < n; ++i)
		{
			cin >> p[i];//输入数组元素
		}
		maopao(p,n);//调用函数
		for (int i = 0; i < n;++i)
		{
			cout << p[i] << " ";//输出排序后的数组
		}
		cout << endl;
	    delete[]p;  //释放动态数组
		
	   return 0;
	 }

 