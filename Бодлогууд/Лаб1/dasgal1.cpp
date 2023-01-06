 #include<iostream>
using namespace std;

// funciton zarlalt hiij bna 
int max(int, int);

// 2 toonii hamgiin ihiig oldog function 
 int max(int a, int b){
    if(a>b)
    return a;
    return b; 
 }
 
 int main(){
      int a, b, c, maxx;  // int turliin huwisagchuudaa zarlaj bna 
      cout<<"Toonuudaa  oruulna uu";  // Toonuudaa oruulna uu gj delgets rvv hewlej bna
      cin>>a>>b>>c;      // garaas 3 int turliin too awj bna
      maxx = max(c,max(a, b));  // maxx huwsagchid hamgiin ih toog oldog function heregjvvlj hamgiin ih toogoo olj bna
      cout<<"hamgiin ih too "<<maxx;   // hamgiin ih toog olood delgets rvv hewlej bna

 }

 