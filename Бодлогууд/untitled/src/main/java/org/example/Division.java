package org.example;

public class Division {
    private String DivisionName;
    Division(){
        DivisionName = "unnamed";
    }
    Division(String DivisionName){
        this.DivisionName =DivisionName;
    }
    String getDivisionName(){
        return DivisionName;
    }
    void setDivisionName(String DivisionName){
        this.DivisionName = DivisionName;
    }

}
