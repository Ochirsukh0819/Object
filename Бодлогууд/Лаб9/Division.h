#ifndef _div_
#define _div_ 
#include <iostream>
using namespace std;
#include<string.h>

class Division
{
private:
    char *DivisionName;

public:
    Division();
    Division(char *DivisionName);
    char *getDivisionName();
    void setDivisionName(char *DivisionName);

    ~Division();
};

#endif