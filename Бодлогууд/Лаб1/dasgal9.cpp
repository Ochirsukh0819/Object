#include<iostream>
using namespace std;
//  fucntion zarlalt
void ascend(int A[], int); 
void descend(int A[], int);

// Usuhuur eremblegdsen function heregjvvlj bna
void ascend(int A[], int n){
    int i, j, sav;    // huwsigchdaa zarlaj bna
    for(i=1; i<n; i++){    //n hvrtelh dawtalt hiij bna 
        sav  = A[i];     // eremblegdeegui ehnii element
        j = i -1;       // eremblegdsen elementiin index utga
        while(j>=0 && A[j]> sav){    // ehnii element daraagiin elementeesee ih bnu gj shalgaj bna
            A[j+1]= A[j];   // herwee ih  bvl baga daraagiin element deeree utgaa onoono 
            j--;     // j horogduulna 
        }
        A[j+1]= sav;    //  eremblegdsen elementiin daraagiin elementiig bichij bna
    }
}
// Buurahaar eremblegdsen function heregjvvlj bna
void descend(int A[], int n){
    int i, j, sav;   // huwsigchdaa zarlaj bna
    for(i=1; i<n; i++){    //n hvrtelh dawtalt hiij bna 
        sav  = A[i];   // eremblegdeegui ehnii element
        j = i -1;    // eremblegdsen elementiin index utga
        while(j>=0 && A[j]< sav){   // ehnii element daraagiin elementeesee baga bnu gj shalgaj bna
            A[j+1]= A[j];    // herwee baga  bvl  daraagiin element deeree utgaa onoono 
            j--;   // j horogduulna 
        }
        A[j+1]= sav;   //  eremblegdsen elementiin daraagiin elementiig bichij bna
    }
}





main(){

   int n, i;   // huwisagchdadaa zarlaj bna  
   cout<<"n toogoo oruulna uu?";  // n toogoo oruulna uu gj delgets rvv hewlej bna
   cin>>n; // n toogoo garaas awj bna
   int A[n];   // garaas awsan n  hemjeetei hvsnegt vvsgej bna
   for(i=0; i<n; i++){  // n hvrtelh dawtalt hij bna 
    cin>>A[i];  // n hvrtelh toonuudiig garaas awj  bna 
   }

   ascend(A,n);   // usuhuur erembelegdsen functioniig duudaj bna
   
   cout<<"Usuhuur eremblegdsen \n";   // Usuhuur eremblegdsen bnu gj delgets rvv hewlej bna
   for(i=0; i<n; i++){   // n hvrtel dawtalt hiij bna 
    cout<<A[i]<<"\n";   // n hvrtelh elementee delgets rvv hewlej bna
   }

    
   descend(A, n);   // buurahaar erembelegdsen functioniig duudaj bna
   cout<<"Buurahaar eremblegdsen \n ";     // Buurahaar eremblegdsen bnu gj delgets rvv hewlej bna
     for(i=0; i<n; i++){  // n hvrtel dawtalt hiij bna 
    cout<<A[i]<<"\n";  // n hvrtelh elementee delgets rvv hewlej bna
   }

}