#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

class Person{
    private:
        char *name;
        char *ssnum;
        int age;
    public:
        Person(){
            name = new char[strlen("unnamed") + 1];
            strcpy(name, "unnamed");
            ssnum = new char[strlen("unknown") + 1];
            strcpy(ssnum, "unknown");
            age = 0;
        }
        Person(char *ner, char* num, int nas){
            name = new char[strlen(ner) + 1];
            strcpy(name, ner);
            ssnum = new char[strlen(num) + 1];
            strcpy(ssnum, num);
            age = nas;
        }
        char *getName(){
            return name;
        }
        char *getSSNum(){
            return ssnum;
        }
        int getAge(){
            return age;
        }
        void setName(char *ner){
            delete name;
            name = new char[strlen(ner) + 1];
            strcpy(name, ner);
        }
        void setSSNum(char *num){
            delete ssnum;
            ssnum = new char[strlen(num) + 1];
            strcpy(ssnum, num);
        }
        void setAge(int nas){
            age = nas;
        }
        ~Person(){
            delete name;
            delete ssnum;
        }
};

class Spouse : public Person{
    private:
        char *anniversaryDate;
    public:
        Spouse() : Person(){
            anniversaryDate = new char[strlen("unknown") + 1];
            strcpy(anniversaryDate, "unknown");
        }
        Spouse(char *date, char *ner, char* num, int nas) : Person(ner, num, nas){
            anniversaryDate = new char[strlen(date) + 1];
            strcpy(anniversaryDate, date);
        }
        char* getAnniversaryDate(){
            return anniversaryDate;
        }
        void setAnniversaryDate(char *date){
            delete anniversaryDate;
            anniversaryDate = new char[strlen(date) + 1];
            strcpy(anniversaryDate, date);
        }
        ~Spouse(){
            delete anniversaryDate;
        }
};

class Child : public Person{
        private:
            char *favoriteToy;
        public:
            Child() : Person(){
                favoriteToy = new char[strlen("unknown") + 1];
                strcpy(favoriteToy, "unknown");
            }
            Child(char *toy, char *ner, char* num, int nas) : Person(ner, num, nas){
                favoriteToy = new char[strlen(toy) + 1];
                strcpy(favoriteToy, toy);
            }
            char* getFavoriteToy(){
                return favoriteToy;
            }
            void setFavoriteToy(char *toy){
                delete favoriteToy;
                favoriteToy = new char[strlen(toy) + 1];
                strcpy(favoriteToy, toy);
            }
            ~Child(){
                delete favoriteToy;
            }
};

class Division{
    private:
        char *divisionName;

    public:
        Division(){
            divisionName = new char[strlen("unknown") + 1];
            strcpy(divisionName, "unknown");
        }
        Division(char *name){
            divisionName = new char[strlen(name) + 1];
            strcpy(divisionName, name);
        }
        char* getDivisionName(){
            return divisionName;
        }
        void setDivisionName(char* name){
            delete divisionName;
            divisionName = new char[strlen(name) + 1];
            strcpy(divisionName, name);
        }
        ~Division(){
            delete divisionName;
        }
};

class JobDescription{
    private:
        char *description;
    public:
        JobDescription(){
            description = new char[strlen("unknown") + 1];
            strcpy(description, "unknown");
        }
        JobDescription(char *desc){
            description = new char[strlen(desc) + 1];
            strcpy(description, desc);
        }
        char* getDescription(){
            return description;
        }
        void setDescription(char *desc){
            description = new char[strlen(desc) + 1];
            strcpy(description, desc);
        }
        ~JobDescription(){
            delete description;
        }
};

class Employee : public Person{
    private:
        vector<Spouse> spouse;
        vector<Child> child;
        vector<JobDescription> job;
        Division div; 
        char *companyID;
        char *title;
        char *startDate;
    public:
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
};

int main(){
    Division div1("1st"), div2("2nd"), div3("3rd");
    JobDescription des1("manager"), des2("ceo"), des3("accountant"), des4("supervisor"), des5("supervisor");
    
    Employee e1("Com1", "TavanBogd", "2002-09-22", "Bold", "ri03252211", 18, des1, div1);
    Employee e2("Com2", "TavanBogd", "2001-01-01", "Bayr", "ri01210114", 20, des2, div2);
    Employee e3("Com2", "TavanBogd", "2000-05-11", "Tselmeg", "ri00251114", 21, des3, div3);
    
    e1.addDesc(des4);
    e2.addDesc(des5); 
    
    Spouse sp1("2000-01-01", "Dulmaa", "ri01210112", 21);
    Spouse sp2("1999-10-04", "Zaya", "fb99210112", 21);
    Spouse sp3("1999-10-04", "Zaya", "fb99210112", 21);

    e1.setSpouse(sp1);
    e2.setSpouse(sp2);
    e3.setSpouse(sp3);
    
    Child c11("goku", "Bat", "ri12312312", 10);
    Child c12("naruto", "Dorj", "af12312312", 9);
    Child c21("levi", "Tsetseg", "gg11112222", 5);
    
    
    e1.addChild(c11);
    e1.addChild(c12);
    e2.addChild(c21);
    
    e1.print();
    e2.print();
    e3.print();
    return 0;
}
