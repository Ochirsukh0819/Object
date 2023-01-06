#include "twod.h"
#ifndef _triangle_
#define _triangle_

class triangle : public twod
{

private:
    float h;

public:
    float findArea();
    float findP();
    void findX();
    void set_h(float);
    float get_h();
    triangle(float x);
};

#endif
