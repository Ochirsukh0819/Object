package org.example;

import java.util.Date;

public class Spouse extends Person{
    private String  anniversary;

    Spouse(){
        this.anniversary  = "empty";
    }
    Spouse(String anniversary, String name, String ssnum, int age){

        this.anniversary = anniversary;
        this.name = name;
        this.ssnum = ssnum;
        this.age = age;
    }

  String getAnniversary(){
      return anniversary;
  }
  void setAnniversary(String anniversary){
      this.anniversary = anniversary;
  }
}
