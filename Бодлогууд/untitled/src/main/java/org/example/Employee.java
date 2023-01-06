package org.example;

import java.text.DateFormat;
import java.util.Date;
import java.util.Vector;

public class Employee extends Person{

    private String CompanyID;
    private String Title;
    private Date StartDate;

    Employee(){
         CompanyID  = "Unnamed";
         Title  = "Unnamed";
         StartDate = new Date();
    }
    Employee(String CompanyID, String Title, Date StartDate, String name, String ssnum, int age, JobDescription job, Division division){
        this.CompanyID = CompanyID;
        this.Title = Title;
        this.StartDate = StartDate;
        this.name = name;
        this.ssnum = ssnum;
        this.age = age;
        this.job.add(job);
        this.division.setDivisionName(division.getDivisionName());

    }

    Vector<Spouse> spouse = new Vector<Spouse>();
    Vector<Child> child = new Vector<Child>();
    Vector<JobDescription> job = new Vector<JobDescription>();
    Division division = new Division();

    void addJob(JobDescription j){
        this.job.add(j);
    }
    void addChild(Child son){
        this.child.add(son);
    }

    void setSpouse( Spouse love){
        if(spouse.size() == 1)
            System.out.println("Hostoi hvn bna shvvdee ");
        else
            spouse.add(love);
    }

    void setDivision(Division a){
        division.setDivisionName(a.getDivisionName());
    }

    // get
    String getCompanyID(){
        return  CompanyID;
    }
    String getTitle(){
        return  Title;
    }
    Date getStartDate(){
        return StartDate;
    }
    // set
    void setCompanyID(String CompanyID){
        this.CompanyID = CompanyID;
    }
    void setTitle(String Title){
        this.Title = Title;
    }
    void setStartDate(Date StartDate) {
    this.StartDate = StartDate;
    }

    void print(){
        System.out.println(getName());
        System.out.println(getSsnum());
        System.out.println(getAge());
        System.out.println(getCompanyID());
        System.out.println(getTitle());
        System.out.println(getStartDate());
        //System.out.println(spouse.elementAt(0));
        System.out.println(division.getDivisionName());
    }


}
