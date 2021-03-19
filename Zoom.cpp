#include "Zoom.h"

Zoom::Zoom()
{
    amount = 0;
}

Zoom::Zoom(Point p, int a, int d)
{
    amount = a;
    zoom_direction = d;

    EngineGlut e;
    e.drawClear();


    if(zoom_direction)
    {
        p.set_x(p.get_x() * amount);
        p.set_y(p.get_y() * amount);
    }
    else
    {
        p.set_x(p.get_x() / amount);
        p.set_y(p.get_y() / amount);
    }

    p.draw();
}

Zoom::Zoom(Line l, int a, int d)
{
    amount = a;
    zoom_direction = d;

    EngineGlut e;
    e.drawClear();

    Point p1, p2;
    p1 = l.get_A();
    p2 = l.get_B();

    if(zoom_direction)
    {
        p1.set_x(p1.get_x() * amount);
        p1.set_y(p1.get_y() * amount);
        p2.set_x(p2.get_x() * amount);
        p2.set_y(p2.get_y() * amount);
    }
    else
    {
        p1.set_x(p1.get_x() / amount);
        p1.set_y(p1.get_y() / amount);
        p2.set_x(p2.get_x() / amount);
        p2.set_y(p2.get_y() / amount);
    }
    l.set_A(p1);
    l.set_B(p2);
    l.draw();
}

Zoom::Zoom(Triangle t, int a, int d)
{
    amount = a;
    zoom_direction = d;

    EngineGlut e;
    e.drawClear();

    Point p1, p2, p3;
    p1 = t.get_A();
    p2 = t.get_B();
    p3 = t.get_C();

    if(zoom_direction)
    {
        p1.set_x(p1.get_x() * amount);
        p1.set_y(p1.get_y() * amount);
        p2.set_x(p2.get_x() * amount);
        p2.set_y(p2.get_y() * amount);
        p3.set_x(p3.get_x() * amount);
        p3.set_y(p3.get_y() * amount);
    }
    else
    {
        p1.set_x(p1.get_x() / amount);
        p1.set_y(p1.get_y() / amount);
        p2.set_x(p2.get_x() / amount);
        p2.set_y(p2.get_y() / amount);
        p3.set_x(p3.get_x() / amount);
        p3.set_y(p3.get_y() / amount);
    }
    t.set_points(p1,p2,p3);
    //t.set_type(1);
    t.draw(1);
}

Zoom::Zoom(Rectangle r, int a, int d)
{
    amount = a;
    zoom_direction = d;

    EngineGlut e;
    e.drawClear();

    Point p1, p2, p3, p4;
    p1 = r.get_A();
    p2 = r.get_B();
    p3 = r.get_C();
    p4 = r.get_D();

    if(zoom_direction)
    {
        p1.set_x(p1.get_x() * amount);
        p1.set_y(p1.get_y() * amount);
        p2.set_x(p2.get_x() * amount);
        p2.set_y(p2.get_y() * amount);
        p3.set_x(p3.get_x() * amount);
        p3.set_y(p3.get_y() * amount);
        p4.set_x(p4.get_x() * amount);
        p4.set_y(p4.get_y() * amount);
    }
    else
    {
        p1.set_x(p1.get_x() / amount);
        p1.set_y(p1.get_y() / amount);
        p2.set_x(p2.get_x() / amount);
        p2.set_y(p2.get_y() / amount);
        p3.set_x(p3.get_x() / amount);
        p3.set_y(p3.get_y() / amount);
        p4.set_x(p4.get_x() / amount);
        p4.set_y(p4.get_y() / amount);
    }
    r.set_points(p1,p2,p3,p4);
    r.draw(1);
}

Zoom::~Zoom()
{
    //dtor
}
