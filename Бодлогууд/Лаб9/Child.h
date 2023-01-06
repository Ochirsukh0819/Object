#ifndef _child_
#define _child_
#include "Person.h"

class Child : public Person{

     private:
        char *favoriteToy;
    public:

        Child();
        Child(char *favoriteToy, char *name, char* ssnum, int age);
        char* getFavoriteToy();
        void setFavoriteToy(char *favoriteToy);
        ~Child();

};


#endif