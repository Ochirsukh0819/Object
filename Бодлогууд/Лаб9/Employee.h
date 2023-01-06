#ifndef _employee_
#define _employee_
#include "Person.h"
#include "Spouse.h"
#include "Child.h"
#include "JobDescription.h"
#include "Division.h"



class Employee : public Person{
 
 private:
        vector<Spouse> spouse;
        vector<Child> child;
        vector<Job> job;
        Division div;
        char *companyID;
        char *title;
        char *startDate;
    public:
        Employee();
        Employee(char *id, char *garchig, char*date, char *ner, char* num, int nas, Job desc, Division d);
        void addDesc(Job desc);
        void setDiv(Division d);
        void addChild(Child hvvhed);
        int childCount();
        void setSpouse(Spouse ehner);
        char* getCompanyID();
        char* getTitle();
        char* getStartDate();
        void setCompanyID(char *id);
        void setTitle(char *garchig);
        void setStartDate(char* start);
        ~Employee();
        void print();

};

#endif

