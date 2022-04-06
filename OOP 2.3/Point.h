#pragma once
#include <iostream>
#include <string>
using namespace std;

class Point
{
	double x, y;
public:
	Point(); // конструктор за умовчанням
	Point(double, double); // конструктор ініціалізації
	Point(const Point&); //копіювання
	~Point();

	double getX() const { return x; };
	double getY() const { return y; };
	void setX(double xx) { x = xx; };
	void setY(double yy) { y = yy; };
	double Angle();
	double Origin();
	bool comparisonEquality(Point s1, Point s2);
	bool comparisonInequality(Point s1, Point s2);

	Point& operator = (const Point&); // присвоєння
	friend istream& operator >> (istream&, Point&); //введення з клавіатури
	friend ostream& operator << (ostream&, const Point&); //вивід на екран
	operator string() const; //приведення типу – перетворення у літерний рядок

	Point& operator ++(); // префіксний інкремент
	Point operator ++(int); // постфіксний інкремент
	Point& operator --(); // префіксний декремент
	Point operator --(int); // постфіксний декремент
};