#include <iostream>
#include<string.h>
using namespace std;
class worker{
	public:		
		void set_number(int a);
		void *set_name(char _name[]);
    	void *set_position(char _position[]);
    	void set_time(float _time);
    	worker();
    	worker(int a, char *n);
    	worker(int a, char *_name, char *_po, float _time);
    	~worker();
    	void print();
    	//float zahiral();
    	float salary();
    	float add_time();
    	int get_number();
    	char *get_name();
    	char *get_position();
    	float get_time();
    	void copy(worker &w);
    private:
    	float zahiral();
    	int number;
		char *name;
		char *position;
		float time;	
};
void worker::copy(worker &w){
	set_number(w.get_number());
	set_name(w.get_name());
	set_position(w.get_position());
	set_time(w.get_time());
}
float worker::zahiral(){
	float salary = 2000;
	return salary*time;
}
float worker::salary(){
	float salary = 5000;
	if(strcmp(get_position(), "zahiral")==0){
		salary = time*salary+zahiral();
	}
	else
		salary=time*salary;
	return salary;
}
float worker::add_time(){
	float t;
	cout<< "heden tsagaar nemegduuleh ve?\n";
	cin>>t;
	time+=t;
	bool status=true;
	if(time<0 && time>24)
		status=false;
	return status;
}
void worker::print(){
	cout << number << " " << name << " "<< position << " " << time << "\n";
}
worker:: worker(){
	name = new char[10];
	position = new char[20];
	number = 0;
	strcpy(name, "def");
	strcpy(position, "def");
	time = 0;
}
worker:: worker(int a, char _name[], char _po[], float _time){
	delete name;
	delete position;
	number=a;
	name = new char[strlen(_name)+1];
    strcpy(name, _name);
    position = new char[strlen(_po)+1];
    strcpy(position, _po);
    time=_time;
}
worker::worker(int a, char *n){
	delete name;
	delete position;
	name = new char[10];
	strcpy(name, n);
	number = a;
}
worker::~worker(){
	delete name;
	delete position;
}
void worker::set_number(int a){
	number=a;
}
void *worker::set_name(char _name[]){
	delete name;
	name = new char[strlen(_name)+1];
    strcpy(name, _name);
}
void *worker::set_position(char _po[]){
	delete position;
	position = new char[strlen(_po)+1];
    strcpy(position, _po);
}
void worker::set_time(float _time){
	time=_time;
}
int worker::get_number(){
    return number;
}
char* worker::get_name(){
    return name;
}
char* worker::get_position(){
    return position;
}
float worker::get_time(){
    return time;
}
int main(){
	int i, j;
	char _name[100];
	char _position[100];
	int _number;
	float _time;
	worker *w[2];   
	for(i = 0 ; i < 2 ; i++){
		w[i] = new worker;
	}
	for(i = 0 ; i < 2 ; i++){
		cout << "number oruul "; cin >> _number;
		w[i]->set_number(_number);
		cout << endl << "ner oruul "; cin >> _name;
		w[i]->set_name(_name);
		cout << endl << "position oruul "; cin >> _position;
		w[i]->set_position(_position);
		cout << endl << "ajillasan tsag oruul "; cin >> _time;
		w[i]->set_time(_time);
	}
	worker *t;
	for(i = 0 ; i < 2 ; i++){
		for(j = i+1 ; j < 2 ; j++){
			if(w[i]<w[j]){
				t = w[i];
				w[i] = w[i+1];
				w[i+1] = t;
			}
		}
	}
	for(i = 0 ; i < 2 ; i++){
		cout << w[i]->get_number();
		cout << endl << w[i]->get_name();
		cout << endl << w[i]->get_position();
		cout << endl << w[i]->get_time() << endl;
	}
	worker a, d;
		cout << "a-iin " << "number oruul "; cin >> _number;
		d.set_number(_number);
		cout << endl << "ner oruul "; cin >> _name;
		d.set_name(_name);
		cout << endl << "position oruul "; cin >> _position;
		d.set_position(_position);
		cout << endl << "ajillasan tsag oruul "; cin >> _time;
		d.set_time(_time);
	int s = 0;
	for(i = 0 ; i < 2 ; i++){
		if(d.get_number()!= w[i]->get_number())
			s++;
	}
	if(s == 2){
		a.copy(d);
	}
	cout << a.get_number();
		cout << endl << a.get_name();
		cout << endl << a.get_position();
		cout << endl << a.get_time() << endl;
	return 0;
}
