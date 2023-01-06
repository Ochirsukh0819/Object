package org.example;

import javax.swing.*;

public class JobDescription {
    private  String Description;
    JobDescription(){
        Description = "Unnamed";
    }
    JobDescription(String Description){
         this.Description = Description;
    }
    String getDescription(){
         return Description;
    }
    void setDescription(String Description){
        this.Description = Description;
    }
}
