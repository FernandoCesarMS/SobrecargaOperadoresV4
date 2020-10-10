#include <iostream>
#include "Point.h"
std::ostream &operator<<(std::ostream &out, const Point &p)
{
    return out << '(' << p.getX() << ", " << p.getY() << ')';
}
std::istream &operator>>(std::istream &in, Point &p)
{
    return in >> p.x >> p.y;
}
Point Point::operator+(const Point &p)
{
    return Point::Point(getX() + p.getX(), getY() + p.getY());
}
Point &Point::operator+=(const Point &p)
{
    x = getX() + p.getX();
    y = getX() + p.getY();
    return Point::Point(getX(), getY());
}