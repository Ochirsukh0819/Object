#include "Division.h"

Division::Division(){
             this->DivisionName = new char[strlen("unknown") + 1];
            strcpy(this->DivisionName, "unknown");
        }
        Division::Division(char *DivisionName){
            this->DivisionName = new char[strlen(DivisionName) + 1];
            strcpy(this->DivisionName, DivisionName);
        }
        char* Division::getDivisionName(){
            return this->DivisionName;
        }
        void Division::setDivisionName(char* DivisionName){
            delete this->DivisionName;
            this->DivisionName = new char[strlen(DivisionName) + 1];
            strcpy(this->DivisionName, DivisionName);
        }
        Division::~Division(){
            delete this->DivisionName;
        }