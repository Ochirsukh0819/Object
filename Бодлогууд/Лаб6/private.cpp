#include<iostream>
using namespace std;



class animal {
    private:
    char name;
    public: 
    int weight;
    protected:
    int legs;
};


class  bird : public animal{
   
   public:
    int wings; 
    int feather;
    // protected  legs
    // pubic weight
};

int main(){
    
    bird b; 
    cout<<b.weight;
    cout<<b.feather;
    cout<<b.wings;
    
}