#include <iostream>
using namespace std;

int checkPrimeNumber(int); // function zarlalt bichij bna
int main() {
  int n; // n huwsigchiig zarlaj bna
  cout<<"n toogoo oruulna uu?";   // n toogoo oruulna uu gj delgetsend hewlej bna
  cin>>n; // n toog garaas awj bna
 
  if (checkPrimeNumber(n)>0)    // anhnii too oldohu gj nohtsol shalgaj bna
    cout << "Ahnii too bol :"<< n;  // anhnii too oldvol anhnii too mon gj delgets rvv hewlej bna 
  else
    cout << "Ahnii too bish"; // anhnii too oldohq bol delgets rvv hewlene

  return 0;
}
// ahnii too shalgadag function heregjvvlj bna
int  checkPrimeNumber(int n) {

 //   0 bolon 1 anhnii too bolj chddgui. 
  if (n == 0 || n == 1) {       // 0 bolon 1 anhnii too bolj chddagui 
    return 0;
  }

  for (int i = 2; i <= n / 2; ++i) {  // 2 aas ehlej shalgaj bna n/2 huwaasan ni ymr too ooriin tal huwaagchidtai bdg toonii chanariig ashiglasan bga 
    if (n % i == 0) {       // herwee ooriin tal hvrtelh toonuudad huwaagdaj bvl anhnii too bish bna 
   return 0;
    }
  }

  return 1;
} 