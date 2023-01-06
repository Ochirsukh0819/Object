#include "JobDescription.h"

Job::Job(){
             this->description = new char[strlen("unknown") + 1];
            strcpy(this->description, "unknown");
        }
        Job::Job(char *description){
            this->description = new char[strlen(description) + 1];
            strcpy(this->description, description);
        }
        char* Job::getDescription(){
            return this->description;
        }
        void Job::setDescription(char* description){
            delete this->description;
            this->description = new char[strlen(description) + 1];
            strcpy(this->description, description);
        }
        Job::~Job(){
            delete this->description;
        }