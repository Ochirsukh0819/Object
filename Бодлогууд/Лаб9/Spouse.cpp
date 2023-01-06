#include "Spouse.h"

Spouse::Spouse() : Person()
{
    this->anniversaryDate = new char[strlen("unknown") + 1];
    strcpy(this->anniversaryDate, "unknown");
}
Spouse::  Spouse(char *anniversaryDate, char *name, char* ssnum, int age) : Person(name, ssnum, age)
{
    this->anniversaryDate = new char[strlen(anniversaryDate) + 1];
    strcpy(this->anniversaryDate, anniversaryDate);
}
char *Spouse::getAnniversaryDate()
{
    return this->anniversaryDate;
}
void Spouse::setAnniversaryDate(char *anniversaryDate)
{
    delete this->anniversaryDate;
    this->anniversaryDate = new char[strlen(anniversaryDate) + 1];
    strcpy(this->anniversaryDate, anniversaryDate);
}
Spouse::~Spouse(){
    delete anniversaryDate;
}