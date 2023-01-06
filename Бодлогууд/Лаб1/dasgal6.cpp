#include<iostream>
using namespace std;

main(){
    int n, i, s=0, j, max =-2147483648, min=2147483647;  // huwisagchidiin todorlhoilj bna
    
    cout<<" n toog oruulna uu?"; // n too oruulna uu gj delgets rvv hewlej bna
    cin>>n;   // n too garaas ogj bna

    for(i=0; i<n; i++){  // n too hvrtel dawtalt hiij bna
         cin>>j;  // n too hvrtel garaas toonuudiig awj bna
         if(j>max)  // maxaas tuhain too ih bnu gj shalgaj bna maxaa olohiin tuld
         max = j;   // herwee maxaas ih too bvl max d ter toogoo olgoj bna
         if(j<min) // min-ees tuhain too baga bnu gj shalgaj bna min-ee olohiin tuld
        min = j;  // herwee min-ees baga too bvl min deer ter baga toogoo olgoj bna

    }
    cout<<"Hamgiin ih ni:"<<max<<"\n";  // Delgets rvv max utgiig hewlej bna
    cout<<"Hamgiin baga ni :"<<min;    // Delgets rvv min utgiig hewlej bna

}