package org.example;


import java.text.DateFormat;
import java.time.LocalDate;
import java.util.Date;

public class Main {
    public static void main(String[] args) {
        Person person = new Person();
        Division div1 = new Division("1st");
        Division div2 = new Division("2st");
        Division div3 = new Division("3st");

        JobDescription job1 = new JobDescription("manager");
        JobDescription job2 = new JobDescription("ceo");
        JobDescription job3 = new JobDescription("accountant");
        JobDescription job4 = new JobDescription("supervisor");
        JobDescription job5 = new JobDescription("oojoo");

        Employee emp1 = new Employee("Com1", "TavanBogd1", new Date(), "Bold1", "ri03252211", 18, job1, div1);
        Employee emp2 = new Employee("Com2", "TavanBogd2", new Date(), "Munguu", "ri01210114", 20, job2, div2);
        Employee emp3  = new Employee("Com3", "TavanBogd3", new Date(), "Hatka", "ri00251114", 21, job3, div3);


        Spouse sp1 =  new Spouse("2000-01-01", "Munguu", "ri01210112", 21);
        Spouse sp2 = new Spouse("1999-10-04", "Zaya", "fb99210112", 21);
        Spouse sp3 = new Spouse("1999-10-04", "Zaya", "fb99210112", 21);
        emp1.setSpouse(sp1);
        emp2.setSpouse(sp2);
        emp3.setSpouse(sp3);

        Child c11 =  new Child("goku", "Bat", "ri12312312", 10);
        Child c12 = new Child("naruto", "Dorj", "af12312312", 9);
        Child c21 = new Child("levi", "Tsetseg", "gg11112222", 5);


        emp1.addChild(c11);
        emp2.addChild(c12);
        emp3.addChild(c21);

        emp1.print();
        emp2.print();
        emp3.print();






        System.out.println(person.getName());
    }
}