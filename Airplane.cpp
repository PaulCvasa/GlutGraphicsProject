#include "Airplane.h"
#include "EngineGlut.h"

Airplane::Airplane()
{
    Line l1, l2;
    Triangle tr;
    Rectangle r1, r2, r3;

    //bottom wing
    Point x1, y1, z1, w1;


    x1.set_x(-100);
    x1.set_y(0);
    y1.set_x(-100);
    y1.set_y(40);
    z1.set_x(100);
    z1.set_y(40);
    w1.set_x(100);
    w1.set_y(0);
    r1.set_points(x1,y1,z1,w1);
    r1.draw(1);
    l1.set_A(y1);
    l1.set_B(w1);
    l1.draw();

    //body
    Point x2, y2, z2, w2;

    x2.set_x(-50);
    x2.set_y(40);
    y2.set_x(-50);
    y2.set_y(140);
    z2.set_x(50);
    z2.set_y(140);
    w2.set_x(50);
    w2.set_y(40);
    r2.set_points(x2,y2,z2,w2);
    r2.draw(1);

    //top wing
    Point x3, y3, z3, w3;
    Point p1(-90,170);
    Point p2(90,170);

    x3.set_x(-120);
    x3.set_y(140);
    y3.set_x(-120);
    y3.set_y(200);
    z3.set_x(120);
    z3.set_y(200);
    w3.set_x(120);
    w3.set_y(140);
    r3.set_points(x3,y3,z3,w3);
    r3.draw(1);
    l1.set_A(y3);
    l1.set_B(w3);
    l1.draw();
    p1.draw();
    p2.draw();

    //head
    Point x4, y4, z4;
    x4.set_x(-50);
    x4.set_y(200);
    y4.set_x(50);
    y4.set_y(200);
    z4.set_x(0);
    z4.set_y(280);
    tr.set_points(x4,y4,z4);
    tr.draw(1);
}

Airplane::~Airplane()
{
    //dtor
}
