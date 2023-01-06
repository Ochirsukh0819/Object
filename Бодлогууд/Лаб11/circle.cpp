#include <iostream>
#include "circle.h"

circle::circle():twod(){
   cout << "\ncircle contructor vvsgev s= " << this->findArea() <<this->findP()<<"\n";
    
}

circle::circle(float a) : twod(a, 1)
{

   cout << "\ncircle contructor vvsgev s= " << this->findArea() <<this->findP()<<"\n";
}
float circle::findArea()
{
   this->s = this->a * this->a * pi;
   return this->s;
}
float circle::findP(){
    this->p = 2 * this->a *pi;
    return this->p;
}

circle::~circle()
{
   delete[] x;
   delete[] y;
}
