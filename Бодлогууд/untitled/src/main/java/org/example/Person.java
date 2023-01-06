package org.example;

public class Person {

    public String name;
    public   String ssnum;
    public int age;

    Person(){
        name = "unnamed";
        ssnum = "unnamed";
        age = 0;
    }
    Person(String name, String ssnum, int age){
        this.name = name;
        this.ssnum = ssnum;
        this.age = age;
    }
    String getName(){
         return name;
    }
    String getSsnum(){
        return ssnum;
    }
    int getAge(){
        return age;
    }
    void setName(String name){
        this.name = name;
    }
    void setSsnum(String ssnum){
         this.ssnum = ssnum;
    }
    void getAge(int age){
         this.age = age;
    }
}
