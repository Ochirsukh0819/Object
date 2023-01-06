#ifndef _spouse_
#define _spouse_
#include "Person.h"


class Spouse : public Person{

  private: 
   char *anniversaryDate;

   public:
   Spouse();
   Spouse(char *anniversaryDate, char *name, char* ssnum, int age);
   void setAnniversaryDate(char *date);
   char *getAnniversaryDate();
   ~Spouse();


  
};

#endif