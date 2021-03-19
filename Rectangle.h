#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.h"


class Rectangle : public Shape
{
    public:
        Rectangle();
        Rectangle(Point, double, double);
        void set_points(Point, Point, Point, Point);
        Point get_A() const;
        Point get_B() const;
        Point get_C() const;
        Point get_D() const;
        void draw(bool);
        virtual ~Rectangle();
        friend std::ostream& operator<<(std::ostream& os, const Rectangle& r);
        void print();
    private:
        Point A, B, C, D;
        bool type;
};

#endif // RECTANGLE_H
