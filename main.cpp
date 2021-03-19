#include <iostream>
#include <unistd.h>
#include <math.h>
#include "EngineGlut.h"
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Zoom.h"
#include "Airplane.h"
#include "Robot.h"

#define PI 3.1415
void drawSinus()
{
    EngineGlut e;

    //x from (-400,+400)
    //y = 100*sin(x)
    for (float i=0; i<360; i+=1)
    {
	float x = 180-i;
	float y = 100*sin(i/180*PI);
	e.drawPoint(x, y);
    }
}

void drawLineAnimation()
{
    EngineGlut e;

    for (int i=-200; i<0; i+=10)
    {
	    e.drawClear();
	    e.drawLine(i,0,i+300,200);
	    usleep(500000);
    }
}
/*void animationBlueprint (Shape* shape)
{
    EngineGlut engine;
    engine.drawClear();

    Matrix transT = Matrix::Translation(2,0);

    for(int i=0;i<120;i++)
    {
        engine.drawClear();
        shape->move(transT);
        shape->draw();
        usleep(20 * 1000);
    }

    Matrix transR = Matrix::Rotation(2);
    for(int i=0;i<180;i++)
    {
        engine.drawClear();
        shape->move(transR);
        shape->draw();
        usleep(20 * 1000);
    }
}
*/

void testPoint()
{
    Point test(1,2);
    test.draw();
}

void testLine()
{
    Line test(-200,0, 200, 100);
    test.draw();
}

void testTriangle()
{
    Triangle test(-200, 0, 200, 100, 250, 250, 1);
    test.draw(0);
}

void testRectangle()
{
    Point t(1,2);
    Rectangle test(t,50,100);
    test.draw(1);
}

void testAirplane()
{
    Airplane a;
}

void testZoom()
{
    Point t(1,2);
    Rectangle test(t,100,50);
    test.draw(1);
    Zoom z(test,3,1); // 3 times larger(because of 1), use 0 instead to make it smaller
}

void test_coutPoint()
{
    Point p(10,15);
    std::cout<<p;
}

void test_coutLine()
{
    Line l(10,20,100,120);
    std::cout<<l;
}

void test_coutTriangle()
{
    Triangle t(10,20,100,120,200,220,1);
    std::cout<<t;
}

void test_coutRectangle()
{
    Point A(10,20);
    Rectangle r(A,100,150);
    std::cout<<r;
}

void testRobot()
{
    Robot r;
}

int main(int argc, char ** argv)
{
    initEngineGlut(argc, argv);

    //drawSinus();
    //drawLineAnimation();

    //testPoint();
    //testLine();
    //testTriangle();
    //testRectangle();
    testAirplane();
    //testZoom();
    //test_coutPoint();
    //test_coutLine();
    //test_coutTriangle();
    //test_coutRectangle();
    //testRobot();

    std::cin.ignore();
}
