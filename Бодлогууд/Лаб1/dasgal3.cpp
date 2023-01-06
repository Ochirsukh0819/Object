#include<iostream>
using namespace std;

// function zarlalt hiji bna.
int findArea(int, int);

// tegsh ontsogtiin talbai oldog hereglegchiin function bichij bna
int findArea(int a, int b){
    return a* b;
}


main(){
    int a,b; // int turliin huwisagch zarlaj bna
    cout<<"Tegsh ontsogtiin taluudiig oruulna uu?";   // tuhain textiig delgets rvv hewlej bna
    cin>>a>>b;   //  a, b huwisagchiin utgiig garaas awj bna

    cout<<"Tegsh ontsogtiin talbai: "<<findArea(a, b);  // talbai oldog hereglegchiin function ruu a, b parametr damjuulj utgiig delgets rvv hewlej bna 
}