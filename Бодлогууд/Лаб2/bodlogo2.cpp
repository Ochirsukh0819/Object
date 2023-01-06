#include<iostream> 
using namespace std; 

// function zarlalt
void swap(int &a, int &b);

void swap(int &a, int &b){   // too1 iin zaaltan huwisagch a too2 zaaltan huwisagch b bna
 
    int solih; // solih huwisagch zarlaj bna 
    solih = a;   // a buyu too1 zaaltan huwisagchiin utgiig solih ogj bna
    a = b ;   // b buyu too2 zaatan huwisaghciig hooson too1 zaaltan huwisgach ruu ogj bn a
    b = solih;  //  b buyu too2 zaatan huwisagcha ruu solih utgiig ogj bna
}




int main(){
    int too1, too2;    // too1, too2 huwisagch zarlaj bna
    cout<<"too1 oruul"; // too1 oruul gj delgets rvv gargaj bna
    cin>>too1;    // too1 garaas awj bna
    cout<<"too2 oruul";  //  too2 oruul gj delgets rvv gargaj bna
    cin>>too2;   // too2 garaas awj bna
    swap(too1, too2);   // swap function too1 too2 damjuulj bna

    cout<<"\ntoo1 :"<<too1<<"\n too2:"<<too2;  // too1, too2 hewlej bna
    
}