#include<iostream>
using namespace std;

int log1(int);

int log1(int n){

   if(n==2)
     return 1; 
     else 
     return log1(n/2);

}1





int main(){

     int n = 4;
     cout<<log1(n);
}