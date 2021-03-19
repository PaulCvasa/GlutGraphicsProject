#include "Triangle.h"

Triangle::Triangle()
{
    A.set_x(0);
    A.set_y(0);
    B.set_x(0);
    B.set_y(0);
    C.set_x(0);
    C.set_y(0);
    type=0;
}

Triangle::Triangle(Point new_A, Point new_B, Point new_C, bool b)
{
    A=new_A;
    B=new_B;
    C=new_C;
    type=b;
}

Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3, bool b)
{
    A.set_x(x1);
    A.set_y(y1);
    B.set_x(x2);
    B.set_y(y2);
    C.set_x(x3);
    C.set_y(y3);
    type=b;
}

void Triangle::set_points(Point new_A, Point new_B, Point new_C)
{
    A=new_A;
    B=new_B;
    C=new_C;
}

void Triangle::set_type(bool t)
{
    type=t;
}

Point Triangle::get_A() const
{
    return A;
}

Point Triangle::get_B() const
{
    return B;
}

Point Triangle::get_C() const
{
    return C;
}

void Triangle::draw(bool b)
{
    //EngineGlut e;
    if (b)
    {
        //e.drawLine(A.get_x(), A.get_y(), B.get_x(), B.get_y());
        engine.drawLine(A.get_x(), A.get_y(), B.get_x(), B.get_y());
        //e.drawLine(B.get_x(), B.get_y(), C.get_x(), C.get_y());
        engine.drawLine(B.get_x(), B.get_y(), C.get_x(), C.get_y());
        //e.drawLine(C.get_x(), C.get_y(), A.get_x(), A.get_y());
        engine.drawLine(C.get_x(), C.get_y(), A.get_x(), A.get_y());
    }
    else
        //e.drawSurface(A.get_x(), A.get_y(), B.get_x(), B.get_y(), C.get_x(), C.get_y());
        engine.drawSurface(A.get_x(), A.get_y(), B.get_x(), B.get_y(), C.get_x(), C.get_y());
}

Triangle::~Triangle()
{
    //dtor
}

std::ostream& operator<<(std::ostream& os, const Triangle& t)
{
    os << "The first point of the triangle: \n" << t.get_A() << "\n\n";
    os << "The second point of the triangle: \n" << t.get_B() << "\n\n";
    os << "The third point of the triangle: \n" << t.get_C() << "\n\n";
    return os;
}

void Triangle::print()
{
    std::cout<<this;
}
