#ifndef POINT_H
#define POINT_H

//#include "EngineGlut.h"
#include "Shape.h"
#include <iostream>

class Point : public Shape
{
    public:
        Point();
        Point(double, double);
        void draw();
        void set_x(double);
        void set_y(double);
        double get_x() const;
        double get_y() const;
        virtual ~Point();
        friend std::ostream& operator<<(std::ostream& os, const Point& p);
        void print();
    private:
        double x,y;
};

#endif // POINT_H
