#ifndef _person_
#define _person_

#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

class Person
{

protected:
    char *name;
    char *ssnum;
    int age;

public:
    Person();
    Person(char *name, char *ssnum, int age);
    char* getName();
 
    char*getSSNum();
   
    int getAge();
    void setName(char *name);
    void setSSNum(char *ssnum);
    void setAge(int age);
    ~Person();
};

#endif;