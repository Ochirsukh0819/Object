#include "twod.h"
#ifndef _cicrle_
#define _circle_

#define pi 3.14
class circle : public twod
{

public:
  circle(float a);
  float findArea();
  float findP();

  ~circle();
};

#endif