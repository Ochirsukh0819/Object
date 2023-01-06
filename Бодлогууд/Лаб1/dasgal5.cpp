#include<iostream>
using namespace std;

main(){
    int n, i, s=0, j, k=1;  // huwisagchidiin todorlhoilj bna
    
    cout<<" n toog oruulna uu?"; // n toog oruulna uu gj delgets rvv hewlej bna
    cin>>n;   // n too garaas awj bna

    for(i=0; i<n; i++){  // n too hvrtel dawtalt hiij bna
         cin>>j;   // n too hvrtel garaas utga awj bna
        s= s+j;  //n too hvrtelh toonuudiin niilberiig olj bna
        k= k* j;  // n too hvrtelh toonuudiin vrjweriig olj bna
    }
    cout<<"Niilber ni:"<<s<<"\n";  // Niilberiig delgets rvv hewlej bna
    cout<<"Vrjwer ni :"<<k;   // Vrjweriig ni delgets rvv hewlej bna

}