#include "Employee.h"

 Employee() : Person(){
            companyID = new char[strlen("unknown") + 1];
            strcpy(companyID, "unknown");
            title = new char[strlen("unknown") + 1];
            strcpy(title, "unknown");
            startDate = new char[strlen("unknown") + 1];
            strcpy(startDate, "unknown");
            cout << "*Ajilchin nemegdsen*" << endl;
        }
        Employee(char *id, char *garchig, char*date, char *ner, char* num, int nas, JobDescription desc, Division d) : Person(ner, num, nas){
            companyID = new char[strlen(id) + 1];
            strcpy(companyID, id);
            title = new char[strlen(garchig) + 1];
            strcpy(title, garchig);
            startDate = new char[strlen(date) + 1];
            strcpy(startDate, date);
            job.push_back(desc);
            div.setDivisionName(d.getDivisionName());
            cout << "*Ajilchin nemegdsen*" << endl;
        }
        void addDesc(JobDescription desc){
            this->job.push_back(desc);
        }
        void setDiv(Division d){
            div.setDivisionName(d.getDivisionName());
        }
        void addChild(Child hvvhed){
            this->child.push_back(hvvhed);
        }
        int childCount(){
            return child.size();
        }
        void setSpouse(Spouse ehner){
            if(spouse.size() == 1)
                cout << "Ehnertei bn\n";
            else
                spouse.push_back(ehner);
        }
        char* getCompanyID(){
            return companyID;
        }
        char* getTitle(){
            return title;
        }
        char* getStartDate(){
            return startDate;
        }
        void setCompanyID(char *id){
            delete companyID;
            companyID = new char[strlen(id) + 1];
            strcpy(companyID, id);
        }
        void setTitle(char *garchig){
            delete title;
            title = new char[strlen(garchig) + 1];
            strcpy(title, garchig);
        }
        void setStartDate(char* start){
            delete startDate;
            startDate = new char[strlen(start) + 1];
            strcpy(startDate, start);
        }
        ~Employee(){
            delete companyID;
            delete title;
            delete startDate;
            cout << endl;
        }
        void print(){
            cout << "Ajiltan: " <<getName() << "-ii medeelel: \n" <<endl;
            cout << "SSNum: " << getSSNum() << endl;
            cout << "Age: " << getAge() << endl;
            cout << "CompanyID: " << companyID << endl;
            cout << "Title: " << title << endl;
            cout << "StartDate: " << startDate << endl;
            cout << "Spouse: " << spouse[1].getName() << endl;
            cout << "Child: " << childCount() << endl;
            cout << "Division" << div.getDivisionName() << endl;
        }