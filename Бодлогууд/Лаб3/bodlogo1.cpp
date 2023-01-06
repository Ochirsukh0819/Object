#include"bodlogo1.h"
#include<string.h>



// start function todorhoilj bna
 void worker::start(){

        number=0;       // number  = 0 utga onooj ogj bna
        strcpy(name," ");    // name " " utga ogj bna
        strcpy(position," ");   // position " " utga ogj bna
        time = 0;       // time 0 utga onooj bna
 }

     // read function todorhoilj bna  
   void worker::read(){
      
       cout<<"\nDugaaraa oruulna uu";  // Dugaaraa oruulna uu hewlej bna
       cin>>number;                     // number garaas awj bna
       cout<<"Neree oruulna uu";     // Neree oruulna uu
       cin>>name;                       // name garaas awj bna
       cout<<"Alban tushaalaa oruulna uu"; //Alban tushaalaa oruulna uu hewlej bna
       cin>>position;                      // position garaas awj bna
       cout<<"Ajillasan tsagaa oruulna uu"; //  Ajillasan tsagaa oruulna uu hewlej bna
       cin>>time;                     // time garaas awj bna
   }
  // print todorhoilj bna
      void worker::print(){
       cout<<"\n"<<number<<"\n"<<name<<"\n"<<position<<"\n"<<time;  // hewlej bna 
   }
 
    // ajilchnii salary fucntion todorhoilj bna
   float worker::salary(){
     
        float s = 0;   // s huwisagch zarlaj bna
        float hourSalary=8000;   // int hourSalary zarlaj bna utga 5000 ogj bna
  

        if(strcmp(position, "director")== 0)   // position director bnu gj shalgaj bna vnn bol 0 ==0 bna
        s = director_salary() + hourSalary * time;    // director_salary function duudaj ajilchnii tsaling nemj bna
        else     // esreg nohtsol
        s = hourSalary * time;   // ajilchnii tsaling olj bna

        return s;  // tsaling butsaaj bna


   }
    // Zahirliin tsaing olj bna

   float worker::director_salary(){

        float s=0;    // int turliin s huwisagch zarkaj bn 0 utga onooj bna
        float hourSalary = 50000;    // hourSalary = 50000 utga onooj bna
        
        return hourSalary * time;  // zahirliin tsaling olj bna

   } 
 
  // nemelt tsagiig olj bna
   bool worker::addHour(){ 

      float nemelt;             // nemelt  float turluur zarlaj bna
      cout<<"Nemelt tsagaa oruulna uu";  // delgets rvv hewlej bna
      cin>>nemelt;   //nemelt garaas awj bna
	
    if(nemelt > 0 && nemelt <= 24) {   // nohtsol shalgaj bna  
		return 1;   // vnn bol 1 
	}
	    return 0;   // hudlaa bol 0 butsaaj bna

   }

   
int main(){
    int i;
    worker a[3];    // hvsnegten object zarlaj bna
  
    for(i=0; i<3; i++){
        a[i].read();
        a[i].print(); 
        cout<<"\nTsalin:"<<a[i].salary();
     }


}
 
  
    

