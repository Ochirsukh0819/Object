#include "shape.h"

int shape::number = 0;

shape::shape(float az)
{
      this->a = a;
      number++;
}

void shape::show_number(){
       cout<<"Objectiin too: "<<number<<endl;
}

int shape::getNumber(){
      return number;
}

void shape::setNumber(const int n){
      number = n;
}
