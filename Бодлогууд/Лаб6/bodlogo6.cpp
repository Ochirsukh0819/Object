#include<iostream>
#include<math.h>

using namespace  std;

#define pi 3.14 


// eh class 
class shape{
     
     protected:
     char name[10];
     float a;
     public:
     void set_a(float _a){

        a = _a;
     }

};


class shape2D :public shape{
  
  protected:

    int *x, *y;
    float s,p;
    
   public: 
   void findArea();
   void findP();


};


class circle : public shape2D{

    public: 
         circle(){
            x = new int[1];
            y = new int[1];
         } 
     
    void findArea(){
         s = pi * pow(a, 2);
        cout<<"\nToirgiin talbai "<<s;
    }

    void findP(){

         p = 6.28 * a;
			cout << "\nperimeter : " << p << endl;
    }

    void set_x(int _x){
        
         x[0] = _x;
    }
    
    void set_y(int _y){
        
         y[0] = _y;
    }

    void print(){
         cout<<"\ntoirgiin x tseg "<<x[0];
         cout<<"\ntoirgiin y tseg "<<y[0];
    }
    
  ~circle(){

        delete []x;
        delete []y;
  }  
  
};


class Square : public shape2D{

	public:
        
        Square(){
            x = new int[4];
            y = new int[4];
        }
    

    public:
    void findArea(){

       cout<<"\nkvadratiin s: "<<(s  = a * a);
    }

    void findP(){
         
          cout<<"\nP :"<< (p = 4 * a);
            
    }	

    void set_x(int _x){

        x[0] = _x;
        x[1] = _x+a;
        x[2] = x[0];
        x[3] =  x[1];
    }

    void set_y(int _y){
        y[0] = _y;
        y[1] = y[0];
        y[2] = _y +4;
        y[3] = y[2];
    }

    void print(){
          cout<<"\nSquare iin coordinat";
          cout<<"\nx1: "<<x[0]<<"\ty1: "<<y[0];
          cout<<"\nx2: "<<x[1]<<"\ty2: "<<y[1];
          cout<<"\nx3: "<<x[2]<<"\ty3: "<<y[2];
          cout<<"\nx4: "<<x[3]<<"\ty4: "<<y[3];
            
    }

     ~Square(){

        delete []x;
        delete []y;
  }
};


class Triangle: public shape2D{
     
     public: 
     float h;
      
         Triangle(){
             x = new int[3];
             y = new int[3];
         }

         void findX(){
            h= sqrt(pow(a, 2) - pow(a/2, 2));
            set_h(h);
         }

         void set_h(float _h){
              h = _h;
         }

        float get_h(){
            return h;  
        }
       
       void findP(){
           p  = a + a + a;
           cout<<"\np: "<<p;
       } 

       void findArea(){

          findX();
          s = (a * get_h()) /2;
          cout<<"\ns: "<<(s);

       }
       void set_a(float _a){
           a = _a;
       }

       void set_y(int _y){
        findX();
        
        y[0] = _y; 
        y[1] = _y - get_h();
        y[2] = _y - get_h();
       }
         void set_x(int _x){
          x[0] = _x;
          x[1] =  x[0] - a/2;
          x[2] = x[0] + a/2;
          
       }

      void print(){
         cout<<"\n x1: "<<x[0]<<"\t y1: "<<y[0];
         cout<<"\n x2: "<<x[1]<<"\t y2: "<<y[1];
         cout<<"\n x3: "<<x[2]<<"\t y3: "<<y[2];
              
      }
      
      ~Triangle(){

         delete []x;
         delete []y;
      }
      
};


		
	
// };

int main(){
    //  toirgiin huwid 
     int r, x, y;
     circle c;
     cout<<"toirgiin raduis";
     cin>>r;
     
     cout<<"\ntoirgiin toviin coordinatuud: ";
     cin>>x>>y;
     c.set_x(x); 
     c.set_y(y); 
     c.set_a(r);
     c.findArea();
     c.findP();
      c.print();


// square  huwid
  int a, x1, y1;
  Square s;
   cout<<"\nSquare taliin urt";
   cin>>a; 
   cout<<"\nSqaure ehnii x, y coordinat";
   cin>>x1>>y1;
   s.set_a(a);
   s.set_x(x1);
   s.set_y(y1); 
   s.findArea();
   s.findP();
   s.print();

   // Triangle
   int a1, x2, y2;
   Triangle t;
   cout<<"\nGurwalchgiin taliiin urt";
   cin>>a1;
   cout<<"\nTriangle ehnii x, y coordinat";
   cin>>x2>>y2;
   t.set_a(a1);
   t.set_x(x2);
   t.set_y(y2);
   t.findArea();
   t.findP();
   
   t.print();

     
    

    
}




