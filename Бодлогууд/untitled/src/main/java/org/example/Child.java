package org.example;

public class Child extends Person{

    String favoriteToy;
    Child() {

    }
    Child(String favoriteToy, String name, String ssnum, int age) {
        this.favoriteToy = favoriteToy;
        this.name = name;
        this.age = age;
        this.ssnum = ssnum;

    }
    String getFavoriteToy(){
        return favoriteToy;
    }
    void setFavoriteToy(String favoriteToy){
        this.favoriteToy = favoriteToy;
    }
}
