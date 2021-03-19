#include "Point.h"

Point::Point()
{
    x=y=0;
}

Point::Point(double new_x, double new_y)
{
    x=new_x;
    y=new_y;
}

void Point::draw()
{
    //EngineGlut e;
    //e.drawPoint(x, y);
    engine.drawPoint(x, y);
}

void Point::set_x(double new_x)
{
    x=new_x;
}

void Point::set_y(double new_y)
{
    y=new_y;
}

double Point::get_x() const
{
    return x;
}
double Point::get_y() const
{
    return y;
}

Point::~Point()
{
    //dtor
}

std::ostream& operator<<(std::ostream& os, const Point& p)
{
    os << "The X coordinate of the point: " << p.get_x() << "\n";
    os << "The Y coordinate of the point: " << p.get_y() << "\n";
    return os;
}

void Point::print()
{
    std::cout<<this;
}


