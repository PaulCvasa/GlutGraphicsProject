#include "Robot.h"

Robot::Robot()
{
    Point start_head(10,10);
    Rectangle head(start_head, 50,50),body;
    Point left_eye, right_eye;
    Triangle nose;
    Line mouth, neck, left_arm, right_arm, left_leg, right_leg;

    //head
    head.draw(1);
    //std::cout<<head;

    left_eye.set_x(20);
    left_eye.set_y(40);
    left_eye.draw();

    right_eye.set_x(45);
    right_eye.set_y(40);
    right_eye.draw();

    Point A(30,30), B(40,30), C(35,35), D;
    nose.set_points(A, B, C);
    nose.draw(1);

    A.set_x(20);
    A.set_y(20);
    B.set_x(50);
    B.set_y(20);
    mouth.set_A(A);
    mouth.set_B(B);
    mouth.draw();
    //body

    A.set_x(5);
    A.set_y(-150);
    B.set_x(65);
    B.set_y(-150);
    C.set_x(65);
    C.set_y(-10);
    D.set_x(5);
    D.set_y(-10);
    body.set_points(A, B, C, D);
    body.draw(1);
    //std::cout<<body;

    A.set_x(35);
    A.set_y(10);
    B.set_x(35);
    B.set_y(-10);
    neck.set_A(A);
    neck.set_B(B);
    neck.draw();

    A.set_x(-20);
    A.set_y(-100);
    B.set_x(5);
    B.set_y(-20);
    left_arm.set_A(A);
    left_arm.set_B(B);
    left_arm.draw();

    A.set_x(87);
    A.set_y(-100);
    B.set_x(65);
    B.set_y(-20);
    right_arm.set_A(A);
    right_arm.set_B(B);
    right_arm.draw();

    A.set_x(25);
    A.set_y(-185);
    B.set_x(25);
    B.set_y(-150);
    left_leg.set_A(A);
    left_leg.set_B(B);
    left_leg.draw();

    A.set_x(45);
    A.set_y(-185);
    B.set_x(45);
    B.set_y(-150);
    right_leg.set_A(A);
    right_leg.set_B(B);
    right_leg.draw();
}

Robot::~Robot()
{
    //dtor
}
