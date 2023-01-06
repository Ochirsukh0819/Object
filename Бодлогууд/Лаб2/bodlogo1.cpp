#include<iostream>
using namespace std; 

// functio zarlalt
void swap(int *a, int *b);

void swap(int *a, int *b){
    int solih;    // solih huwisgach zarlaj bna
    solih = *a;    // a gdg hayg deer bairlah utgiig solih ogj bna
    *a = *b;   // b haygt bairlah utgiig a haygt bairlah utga ruu ogj bna
    *b = solih;   // b hayg bairlah utga ruu solih hadgalsan utgiig ogj bna
}


int main(){
    int a, b;     // a, b huwisgchdiig zarlaj bna
    cout<<"ehnii toogoo oruul";  // ehnii toogoo oruulna uu gj delgets rvv hewlej bna
    cin>>a;   // a toog garaas awj bna
    cout<<"hoyrdahi toogoo oruul"; // hoyrdahi toogoo oruulna uu gj delgets rvv hewlej bna
    cin>>b;  // b toog garaas awj bna
    swap(&a, &b);   // swap functionaar a bolon b tooni haygiig ywuulj bna
    cout<<"\n ehnii too:"<<a<<"\n hoyrdahi  too:"<<b;   // a, b toogoo hewlej bna
}