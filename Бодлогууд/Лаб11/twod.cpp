#include "twod.h"

float twod::get_s()
{
   return this->s;
}
float twod::get_p(){
   return this->p;
}

twod::twod(float a, int points) : shape(a)
{
   this->a = a;
   this->x = new float[points];
   this->y = new float[points];
}

twod::twod():shape(){
   
}
