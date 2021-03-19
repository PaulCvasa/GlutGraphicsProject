#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"


class Triangle : public Shape
{
    public:
        Triangle();
        Triangle(Point, Point, Point, bool);
        Triangle(double, double, double, double, double, double, bool);
        void set_points(Point, Point, Point);
        Point get_A() const;
        Point get_B() const;
        Point get_C() const;
        void set_type(bool);
        void draw(bool);
        virtual ~Triangle();
        friend std::ostream& operator<<(std::ostream& os, const Triangle& t);
        void print();
    private:
        Point A, B, C;
        bool type;
};

#endif // TRIANGLE_H
