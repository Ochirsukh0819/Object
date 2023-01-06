#include "triangle.h"
#include <math.h>
void triangle::findX()
{
   h = sqrt(pow(a, 2) - pow(a / 2, 2));
   set_h(h);
}

void triangle::set_h(float h)
{
   this->h = h;
}

float triangle::get_h()
{
   return this->h;
}

float triangle::findArea()
{
   findX();
   this->s = (this->a * get_h()) / 2;
   return this->s;
}

float triangle::findP(){
   this->p = 3 * this->a;
   return this->p;
}

triangle::triangle(float x) : twod(x, 3)
{

   cout << "triangle contructor vvsgev talbai s: " << this->findArea()<<this->findP() << "\n";
}