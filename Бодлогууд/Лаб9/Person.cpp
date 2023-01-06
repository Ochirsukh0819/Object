#include "Person.h"

Person::Person()
{
    name = new char[strlen("Unnamed") + 1];
    ssnum = new char[strlen("Unnamed") + 1];
    age = 0;
}

Person::Person(char *name, char *ssnum, int age)
{

    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    this->ssnum = new char[strlen(ssnum) + 1];
    strcpy(this->ssnum, ssnum);
    this->age = age;
}
// get
    char* Person::getName()
    {
        return name;
    }
    char* Person::getSSNum()
    {
        return ssnum;
    }

int Person::getAge()
{
    return age;
}

 // set

void Person::setName(char *name)
{
    delete this->name;
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}
void Person::setSSNum(char *ssnum)
{
    delete this->ssnum;
    this->ssnum = new char[strlen(ssnum) + 1];
    strcpy(this->ssnum, ssnum);
}
void Person::setAge(int age)
{
    this->age = age;
}

Person::~Person(){
    delete name;
    delete ssnum;
}
