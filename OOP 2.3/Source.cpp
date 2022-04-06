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
	cout << " Полярні координати: " << x.Angle() << endl;
	cout << " Відстань до початку координат: " << x.Origin() << endl;
	Point y;
	cout << "Input point  " << endl;
	cin >> y;
	cout << " Полярні координати: " << y.Angle() << endl;
	cout << " Відстань до початку координат: " << y.Origin() << endl;

	Point z;
	cout << "Порівняння між двома обєктами на рівність:" << z.comparisonEquality(x, y) << endl;
	cout << "Порівняння між двома обєктами6 на нерівність:" << z.comparisonInequality(x, y) << endl;

	cin.get();
	return 0;
}
