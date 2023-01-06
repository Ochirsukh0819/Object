#include "square.h"

float square::findArea()
{
   this->s = this->a * this->a;
   return this->s;
}
float square::findP(){
   this->p = 4 * this->a;
   return this->p;
}

square::square(float a) : twod(a, 4)
{

   cout << "\nsquare contructor vvsgev s: " << this->findArea() <<this->findP()<< "\n";
}