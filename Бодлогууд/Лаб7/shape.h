
#ifndef _shape_
#define _shape_
#include <iostream>
using namespace std;

class shape
{

protected:
static int number;
    float a;

public:
    // void set_a(float a);
    shape(float a);
   static void show_number();
   static int getNumber();
   static void setNumber(const int n);
};

#endif
