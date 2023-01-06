#include "twod.h"

#ifndef _square_
#define _square_

class square : public twod
{

public:
    float findArea();
    float findP();
    square(float a);
};

#endif