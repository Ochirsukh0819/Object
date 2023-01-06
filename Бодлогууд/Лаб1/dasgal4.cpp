#include<iostream>
using namespace std;

main(){
    int n, i, j=0;  // huwisagchidiin todorlhoilj bna
    float s=0;
    
    cout<<" n toog oruulna uu?"; // n toog oruulna uu gj delgets rvv hewlej bna
    cin>>n;   // n toog garaas awj bna

   
    for(i=0; i<n; i++){    // n hvrtelh too hvrtel dawtalt hiij bna
       cin>>j; // n hvrtel garaas too awj bna
        s= s+j;   // garaas awsan toonuudin niilberiig olj bna 
    } 
    cout<<"Niilber ni:"<<s<<"\n";    //niilberiig delgetsend hewlej bna
    cout<<"arithmetic dundaj ni :"<<s/(float)n;   // n toog float ruu horwvvlj dundajiiig ni olj bna

}