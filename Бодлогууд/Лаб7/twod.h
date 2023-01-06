
#include "shape.h"
#ifndef _twod_
#define _twod_

class twod : public shape
{

protected:
  float *x;
  float *y;
  float h, s, p;

public:
  virtual float findArea() = 0;
  virtual float findP() = 0;
  float get_s();
  float get_p();
  twod(float a, int points);
};

#endif

