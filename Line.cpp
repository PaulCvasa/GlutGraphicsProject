#include "Line.h"

Line::Line()
{
    A.set_x(0);
    A.set_y(0);
    B.set_x(0);
    B.set_y(0);
}

Line::Line(Point new_A, Point new_B)
{
    A=new_A;
    B=new_B;
}

Line::Line(double x1, double y1, double x2, double y2)
{
    A.set_x(x1);
    A.set_y(y1);
    B.set_x(x2);
    B.set_y(y2);
}

void Line::set_A(Point new_A)
{
    A=new_A;
}

void Line::set_B(Point new_B)
{
    B=new_B;
}

Point Line::get_A() const
{
    return A;
}

Point Line::get_B() const
{
    return B;
}

void Line::draw()
{
    //EngineGlut e;
    //e.drawLine(A.get_x(), A.get_y(), B.get_x(), B.get_y());
    engine.drawLine(A.get_x(), A.get_y(), B.get_x(), B.get_y());
}

Line::~Line()
{
    //dtor
}

std::ostream& operator<<(std::ostream& os, const Line& l)
{
    os << "The first point of the line: \n" << l.get_A() << "\n\n";
    os << "The second point of the line: \n" << l.get_B() << "\n\n";
    return os;
}

void Line::print()
{
    std::cout<<this;
}
