#ifndef _job_
#define _job_

#include <iostream>
using namespace std;
#include<string.h>

class Job
{
private:
    char *description;

public:
    Job();
    Job(char *description);
    char *getDescription();
    void setDescription(char *description);

    ~Job();
};

#endif