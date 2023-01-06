`#include<iostream>
#include<math.h>
using namespace std;
class point{
	public:
		float x,y;
};

class Shape{};
class Shape2D : public Shape{
	public:
		point A;
};
class Circle : public Shape2D{
	public:
		int r;
		char name[20];
		void talbai_oloh(){
			float S = 3.14 * r * r;
			cout << "talbai : " << S << endl;
		}
		void perimeter_oloh(){
			float l = 6.28 * r;
			cout << "perimeter : " << l << endl;
		}
};
class Square : public Shape2D{
	public:
		point B,C,D;
		int a;
		void talbai_oloh1(){
			float s = sqrt(pow((A.x - B.x),2) + pow((A.y - B.y),2));
			s = s *s;
			cout << "talbai : " << s << endl;	
		}
};
class Triangle : public Shape2D{
	public:
		point B,C;
		float a;
		char name[20];
};

	float distance(point a, point b){
		float d = pow((a.x - b.x),2) + pow((a.y - b.y),2);
		return sqrt(d);
	}

int main(){
	Circle toirog;
	cout << "Toirgiin tuviin tsegiin coordinate g x,y gesen daraallaar oruulna uu " << endl;
	cin >> toirog.A.x >> toirog.A.y;
	cout << "Toirgiin radius hed ve" << endl;
	cin >> toirog.r;
	
	cout << "Toirgiin coordinate: "<< "("<< toirog.A.x <<"," << toirog.A.y << ")" << endl << "Toirgiin radius: " << toirog.r << endl;
	
	Square kv;
	cout << "kviin taliin urtiig oruulna uu" << endl;
	cin >> kv.a;
	cout << "kviin zuun deed oroin coordinatiig x,y gesen daraallaar oruulna uu" << endl;
	cin >> kv.A.x >> kv.A.y;
	kv.B = kv.A;
	kv.B.x = kv.A.x + kv.a;
	
	kv.C = kv.B;
	kv.C.y = kv.C.y - kv.a;
	
	kv.D = kv.A;
	kv.D.y = kv.D.y - kv.a;
	
	cout << "kviin coordinatuud " << endl;
	
	cout <<"(" <<kv.A.x << ","<< kv.A.y <<")" << "....."<< "(" <<kv.B.x << ","<< kv.B.y <<")" << endl;
	cout << "..............." << endl << "..............." << endl << "..............." << endl;
	cout <<"(" <<kv.D.x << ","<< kv.D.y <<")" << "....."<< "(" <<kv.C.x << ","<< kv.C.y <<")" << endl;
	
	
	Triangle gur;
	cout << "Zuv gurvaljnii taliin urtiig oruulna uu"<< endl;
	cin >> gur.a;
	cout << "Zuv gurvaljnii oroin coordinatiig x,y gesen daraallaar oruulna u"<< endl;
	cin >> gur.A.x >> gur.A.y;
	
	float height = sqrt((3*pow(gur.a,2))/4);
	gur.B = gur.A;
	gur.B.y = gur.A.y - height;
	gur.B.x = gur.A.x - gur.a/2; 
	
	gur.C = gur.A;
	gur.C.y = gur.A.y - height;
	gur.C.x = gur.A.x + gur.a/2;
	
	cout << "    (" << gur.A.x << "," << gur.A.y << ")    " << endl;
	cout << "   ......."<< endl;
	cout << " (" << gur.B.x << "," << gur.B.y << ") " << " (" << gur.C.x << "," << gur.C.y << ") " <<endl;
	return 0;	
}

`