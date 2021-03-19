#ifndef LINE_H
#define LINE_H

#include "Point.h"

class Line : public Shape
{
    public:
        Line();
        Line(Point, Point);
        Line (double, double, double, double);
        void set_A(Point);
        void set_B(Point);
        Point get_A() const;
        Point get_B() const;
        void draw();
        virtual ~Line();
        friend std::ostream& operator<<(std::ostream& os, const Line& l);
        void print();
    private:
        Point A, B;
};

#endif // LINE_H
