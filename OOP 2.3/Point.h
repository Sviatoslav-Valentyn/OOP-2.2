#pragma once
#include <iostream>
#include <string>
using namespace std;

class Point
{
	double x, y;
public:
	Point(); // ����������� �� ����������
	Point(double, double); // ����������� �����������
	Point(const Point&); //���������
	~Point();

	double getX() const { return x; };
	double getY() const { return y; };
	void setX(double xx) { x = xx; };
	void setY(double yy) { y = yy; };
	double Angle();
	double Origin();
	bool comparisonEquality(Point s1, Point s2);
	bool comparisonInequality(Point s1, Point s2);

	Point& operator = (const Point&); // ���������
	friend istream& operator >> (istream&, Point&); //�������� � ���������
	friend ostream& operator << (ostream&, const Point&); //���� �� �����
	operator string() const; //���������� ���� � ������������ � ������� �����

	Point& operator ++(); // ���������� ���������
	Point operator ++(int); // ����������� ���������
	Point& operator --(); // ���������� ���������
	Point operator --(int); // ����������� ���������
};