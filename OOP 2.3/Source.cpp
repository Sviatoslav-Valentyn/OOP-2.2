#include "Point.h"
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Point a(1, 1);
	Point b(1, 1);
	cout << a++ << endl;
	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;

	Point x;
	cout << "Input point  " << endl;
	cin >> x;
	cout << " ������ ����������: " << x.Angle() << endl;
	cout << " ³������ �� ������� ���������: " << x.Origin() << endl;
	Point y;
	cout << "Input point  " << endl;
	cin >> y;
	cout << " ������ ����������: " << y.Angle() << endl;
	cout << " ³������ �� ������� ���������: " << y.Origin() << endl;

	Point z;
	cout << "��������� �� ����� ������� �� ������:" << z.comparisonEquality(x, y) << endl;
	cout << "��������� �� ����� �������6 �� ��������:" << z.comparisonInequality(x, y) << endl;

	cin.get();
	return 0;
}
