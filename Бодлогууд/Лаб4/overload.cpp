#include<iostream>
using namespace std;

int sum(int, int);
int sum(int, int , int);

int sum(int a, int b){
     
     return a+b;
}

int sum(int a, int b, int  q){

    return a+b+q;
}

int main(){
     
      cout<<"Ehnii sum "<<sum(5, 8);
      cout<<"\nHoyrdahi sum "<<sum(9, 8, 100);
 }