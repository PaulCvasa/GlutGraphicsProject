#ifndef ZOOM_H
#define ZOOM_H

#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Airplane.h"

class Zoom
{
    public:
        Zoom();
        Zoom(Point p, int a, int d);
        Zoom(Line l, int a, int d);
        Zoom(Triangle t, int a, int d);
        Zoom(Rectangle r, int a, int d);
        ~Zoom();
    private:
        int amount;
        int zoom_direction;

};

#endif // ZOOM_H
