#ifndef SHAPE_H
#define SHAPE_H

#include "EngineGlut.h"

class Shape
{
public:
    //void virtual draw();  //why do I have to define this function if it works without it?
    void virtual print();
protected:
    EngineGlut engine;
};

#endif
