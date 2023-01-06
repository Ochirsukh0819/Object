#include<iostream>
using namespace std; 

main(){

    int numbers[5];   // int turliin 5 gsn urttai number hvsnegt zarlaj bna
    int * p;   // haygan huwisagch zarlaj bna
    p = numbers;     // hvsnegtiin ehnii haygiig awj bna
    *p = 10;  // ehnii haygt 10 gsn utga ogj bna
    p++;   // 1  dahi hayg ruu shiljij bna
     *p = 20; // 2 dahi haygiin utga ruu 20 iig ogloo.
    p = &numbers[2];  *p = 30;  //  hvsnegtiin 2 dahi elementiin haygiig p ogj bna 30 gsn utga onooj bna
    p = numbers + 3;  *p = 40;   //  hvsnegtiin 3 dahi elementiin haygiig p ogj bna 40 gsn utga onooj bna
    p = numbers;  *(p+4) = 50; //  hvsnegtiin ehnii elementiin haygiig p ogj bna 4 dehi element rvv 50 gsn utga onooj bna
    for (int n=0; n<5; n++)    // hvsnegtii nbvh elementig dawtaltaar hewlej bna
    cout << numbers[n] << ", ";
}

