#include"mytriangle.h"
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x, y, z;
	cin >> x >> y >> z;//��������������
	if (is_valid(x, y, z) == 1)
	{
		cout << "����Ϸ�" << endl;
	}
	else
	{
		cout << "����Ƿ�" << endl;
		return 0;//�����������ε�������ǰ��������
	}
	cout << "�����������Ϊ" << _area(x, y, z) << endl;

	
}
bool is_valid(double side1, double side2, double side3)//�ж������Ƿ��ܹ��������εĺ��� ���ݣ�����������֮�ʹ��ڵ�����
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
double _area(double side1, double side2, double side3)//���㹹�ɵ������ε����
{
	double s,m;
	s = (side1 + side2 + side3) / 2;
	m = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	
	return m;

}