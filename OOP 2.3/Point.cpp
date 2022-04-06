#include "Point.h"
#include <sstream>

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(double xx, double yy)
{
	this ->x = xx;
	this->y = yy;
}

Point::Point(const Point& l)
{
	x = l.x;
	y = l.y;
}

Point::~Point()
{}

double Point::Angle()
{
	double Pi = 4. * atan(1);
	if ((x == 0) && (y == 0))
		return -1;
	if (x == 0)
		return ((y > 0) ? 90 : 270);
	double theta = atan(y / x);
	theta *= 360 / (2 * Pi);
	if (x > 0)
	{
		return ((y >= 0) ? theta : 360 + theta);
	}
	else
	{
		return (180 + theta);
	}
}

double Point::Origin()
{
	double z;
	z = sqrt((x * x) + (y * y));
	return z;
}

bool Point::comparisonEquality(Point s1, Point s2)
{
	return s1.getX() && s1.getY() == s2.getX() && s2.getY();
}

bool Point::comparisonInequality(Point s1, Point s2)
{
	return s1.getX() && s1.getY() != s2.getX() && s2.getY();
}

Point& Point::operator = (const Point& p)
{
	x = p.x;
	y = p.y;
	return *this;
}

istream& operator >> (istream& input, Point& m)
{
	cout << " x = "; input >> m.x;
	cout << " y = "; input >> m.y;
	cout << endl;
	return input;
}

ostream& operator << (ostream& output, const Point& l)
{
	output << string(l);
	return output;
}

Point::operator string () const
{
	stringstream ss;
	ss << " x = " << x << endl;
	ss << " y = " << y << endl;
	return ss.str();
}

Point& Point::operator ++()
{
	x++;
	return *this;
}

Point Point::operator ++(int)
{
	Point t(*this);
	y++;
	return t;
}

Point& Point::operator --()
{
	x--;
	return *this;
}

Point Point::operator --(int)
{
	Point t(*this);
	y--;
	return t;
}