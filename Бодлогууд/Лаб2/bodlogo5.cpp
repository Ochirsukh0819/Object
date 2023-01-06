#include<iostream>
using namespace std;

 int main( ){
int a=125; // int turliin a huwisagch zarlaj bna
int *p = &a;  // a haygiig p haygan huwisagchid ogj bna
cout<<p<<"\n"; // haygiig ni hewlej bna
cout<<*p<<"\n";  // utgiig hewlej bna
p++;   // haygiig tuhai turluur ni nemegdvvlj bna
cout<<p<<"\n";  // haygiig hewlej bna
cout<<*p<<"\n";  // utgiig hewlej bna

 }