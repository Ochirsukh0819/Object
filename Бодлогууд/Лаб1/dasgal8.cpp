#include<iostream>
using namespace std;
// function zarlalt 
int niilber(int A[], int);
float dundaj(int A[], int);

// niilber oldog function heregjvvlj bna.
int niilber(int A[],int  n){
    int i;   // int turliin i huwisagchiig zarlaj bna
    float s=0;   // s huwisagchdiig floataar zarlaj bna
    for(i=0; i<n; i++){   // n too hvrtel dawtalt hiij bna
        s +=A[i];   // n too hvrtelh toonuudiin niilberiig olj bna
    }
    return s;   // s buyu niilberiig butsaaj bna
}
// dundajiig oldog function heregjvvlj bna
float dundaj(int A[], int n){
    return niilber(A, n)/(float)n;  // dundajiig butsaaj bna
}
int main(){
     
     int n, i; // int turliin huwisagch zarlaj bna
     cout<<"n toogoo oruulna uu?";  // n toogoo oruulna uu gj delgets rvv hewlej bna. 
     cin>>n; // n too garaas awj bna
     int A[n];  // n hemjeetei A hvsnegt zarlaj bna
     for(i=0; i<n; i++){  //n hvrtel dawtalt hiij bna
         cin>>A[i];   // n hvrtel toog garaas awj A hvsnegtend hadgalj bna
     }
    
     cout<<"dundaj ni :"<<dundaj(A, n);   // dundajiig delgets rvv hewlej bna 
}