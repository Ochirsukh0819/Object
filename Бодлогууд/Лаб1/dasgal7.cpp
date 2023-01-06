#include<iostream>
using namespace std;

main(){
    int  i, n, tooluur=0;   // int turliin huwisagchidiig zarlaj bna
    cout<<"n toogoo oruulan uu?";  // delgets rvv n toogoo oruulna uu gej hewlj bna
    cin>>n;   // n toogoo garaas awj bna 
    int A[n]; // garaas awsan n too hemjeetei hvsnegt zarlaj bna 
    for(i=0; i<n; i++){  // n too hvrtel dawtalt hiij bna
        cin>>A[i];     // n too hvrtel garaas utga awj bna awsan utgiig A hvsnegtend hadgalj bna
        if(A[i]%2 == 0) // Hvsnegt dotor hadgalsan utguudad tegsh too bnu gj nohtsol shalgaj bna
        tooluur++;  // herwee tegsh too bvl too ni toolj bna 
    }

    if(tooluur>0)  // tegsh too heden shirheg bgaag nohtsol shalgaj bna
    cout<<"Tegsh elementvvdiin too ni: "<<tooluur;  // herwee tegsh too bvl heden shirheg bgaag delgets rvv hewlej bna 
    else  
    cout<<"Tegsh element bhgui bna";  // tegsh element bhgui bol bhgui gj delgets rvv hewlej bna
}