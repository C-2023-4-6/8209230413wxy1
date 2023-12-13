#include"mytriangle.h"
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x, y, z;
	cin >> x >> y >> z;//输入三角形三边
	if (is_valid(x, y, z) == 1)
	{
		cout << "输入合法" << endl;
	}
	else
	{
		cout << "输入非法" << endl;
		return 0;//不构成三角形的三边提前结束程序
	}
	cout << "该三角形面积为" << _area(x, y, z) << endl;

	
}
bool is_valid(double side1, double side2, double side3)//判断三边是否能构成三角形的函数 依据：三角形两边之和大于第三边
{
	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
double _area(double side1, double side2, double side3)//计算构成的三角形的面积
{
	double s,m;
	s = (side1 + side2 + side3) / 2;
	m = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	
	return m;

}