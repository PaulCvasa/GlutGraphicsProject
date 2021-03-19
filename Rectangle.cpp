#include "Rectangle.h"

Rectangle::Rectangle()
{
    A.set_x(0);
    A.set_y(0);
    B.set_x(0);
    B.set_y(0);
    C.set_x(0);
    C.set_y(0);
    D.set_x(0);
    D.set_y(0);
}

Rectangle::Rectangle(Point new_A, double width, double height)
{
    A=new_A;
    B.set_x(A.get_x()+width);
    B.set_y(A.get_y());
    C.set_x(B.get_x());
    C.set_y(new_A.get_x()+height);
    D.set_x(A.get_x());
    D.set_y(A.get_y()+height);
}

void Rectangle::set_points(Point new_A, Point new_B, Point new_C, Point new_D)
{
    A=new_A;
    B=new_B;
    C=new_C;
    D=new_D;
}

Point Rectangle::get_A() const
{
    return A;
}

Point Rectangle::get_B() const
{
    return B;
}

Point Rectangle::get_C() const
{
    return C;
}

Point Rectangle::get_D() const
{
    return D;
}

void Rectangle::draw(bool b)
{
    //EngineGlut e;
    if (b)
    {
        //e.drawLine(A.get_x(), A.get_y(), B.get_x(), B.get_y());
        engine.drawLine(A.get_x(), A.get_y(), B.get_x(), B.get_y());
        //e.drawLine(B.get_x(), B.get_y(), C.get_x(), C.get_y());
        engine.drawLine(B.get_x(), B.get_y(), C.get_x(), C.get_y());
        //e.drawLine(C.get_x(), C.get_y(), D.get_x(), D.get_y());
        engine.drawLine(C.get_x(), C.get_y(), D.get_x(), D.get_y());
        //e.drawLine(A.get_x(), A.get_y(), D.get_x(), D.get_y());
        engine.drawLine(A.get_x(), A.get_y(), D.get_x(), D.get_y());
    }
    else
    {
        //e.drawSurface(A.get_x(), A.get_y(), B.get_x(), B.get_y(), C.get_x(), C.get_y());
        engine.drawSurface(A.get_x(), A.get_y(), B.get_x(), B.get_y(), C.get_x(), C.get_y());
        //e.drawSurface(D.get_x(), D.get_y(), B.get_x(), B.get_y(), C.get_x(), C.get_y());
        engine.drawSurface(D.get_x(), D.get_y(), B.get_x(), B.get_y(), C.get_x(), C.get_y());
    }
}

Rectangle::~Rectangle()
{
    //dtor
}

std::ostream& operator<<(std::ostream& os, const Rectangle& r)
{
    os << "The first point of the triangle: \n" << r.get_A() << "\n\n";
    os << "The second point of the triangle: \n" << r.get_B() << "\n\n";
    os << "The third point of the triangle: \n" << r.get_C() << "\n\n";
    os << "The fourth point of the triangle: \n" << r.get_D() << "\n\n";
    return os;
}

void Rectangle::print()
{
    std::cout<<this;
}
