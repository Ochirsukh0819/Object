#include<iostream>
using namespace std;

class Matrix
{
	private: 	
		float values[10][10];
		int n,m;
	public:
		Matrix();
		Matrix(int a,int b);
		void printMatrix();
		void Input();
		void setter(int,int);
		void setValue(int i, int j, float value);
		Matrix operator+(const Matrix& a);
		Matrix operator+(const float a);
		Matrix operator*(const Matrix& a);
		Matrix operator-(const Matrix& a);
		void operator=(const Matrix& a);
		void operator++(int);
		void operator--(int);
		void operator+=(float);
		void operator-=(float);
		void operator*=(float);
		void operator>>(int);
};
 Matrix::Matrix(){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			values[i][j] = 0;
		}
	}
 };
 
 Matrix::Matrix(int a,int b){
 	m = a;
 	n = b;
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
	 		values[i][j] = 0;	
 };
 void Matrix::Input(){
 	cout << "Matrix[m,n]" << endl;
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin >> this->values[i][j];
		}
	} 
 };
 void Matrix::setter(int mor ,int bagana){
 	this->m=mor;
 	this->n=bagana;
 }
 void  Matrix::printMatrix(){
 	int i,j;
 	for(i=0;i<m;i++){
 		for(j=0;j<n;j++){
 			cout << this->values[i][j] << " ";
		 }
		 cout << endl;
	 } 	
 };
 //+ operator dahin todorhoilson
 Matrix Matrix::operator+(const Matrix& a)
 {
 	Matrix ret;
 	ret.setter(n,m);
 	int i,j;
 	for(i=0;i<a.m;i++){
 		for(j=0;j<a.n;j++){
 			ret.values[i][j] = this->values[i][j] + a.values[i][j];
		 }
	 }
	 return ret;
 };  
 //+ operator dahin todorhoilson
  Matrix Matrix::operator+(const float a){
 	Matrix ret;
 	ret.setter(n,m);
 	int i,j;
 	for(i=0;i<this->m;i++){
 		for(j=0;j<this->n;j++){
 			ret.values[i][j] = this->values[i][j] + a;
		 }
	 }
	 return ret;  	
  };
  //*  operator dahin todorhoilson
 Matrix Matrix::operator*(const Matrix& a) 
 {
 	Matrix ret;
 	ret.setter(n,m);
 	int i,j,k;
 	for(i=0;i<a.m;i++){		
 		for(j=0;j<a.n;j++){
 			for(k=0;k<n;k++){ 	
 					ret.values[i][j] += this->values[i][k] * a.values[k][j];
 			}
		 }

	 }
	 return ret;
 };
 //- operator dahin todorhoilson
  Matrix Matrix::operator-(const Matrix& a)
 {
 	Matrix ret;
 	ret.setter(n,m);
 	int i,j;
 	for(i=0;i<a.m;i++){
 		for(j=0;j<a.n;j++){
 			ret.values[i][j] = this->values[i][j] - a.values[i][j];
		 }
	 }
	 return ret;
 };
void Matrix::operator=(const Matrix& a)
 {
 	int i,j;
 	for(i=0;i<a.m;i++){
 		for(j=0;j<a.n;j++){
 			this->values[i][j] = a.values[i][j];
		 }
	 }
 };
 //++ operator dahin todorhoilson
void  Matrix::operator++(int)
 {
 	int i,j;
 	for(i=0;i<m;i++){
 		for(j=0;j<n;j++){
 			this->values[i][j]++;
		 }
	 }
 };
 //-- operator dahin todorhoilson
void Matrix::operator--(int)
 {
 	int i,j;
 	for(i=0;i<m;i++){
 		for(j=0;j<n;j++){
 			this->values[i][j]--;
		 }
	 }
 };
 
//+= operator dahin todorhoilson
void Matrix::operator+=(float val)
 {
 	int i,j;
 	for(i=0;i<m;i++){
 		for(j=0;j<n;j++){
 			this->values[i][j] += val;
		 }
	 }
 };
 //-= operator dahin todorhoilson
void Matrix::operator-=(float val)
 {
 	int i,j;
 	for(i=0;i<m;i++){
 		for(j=0;j<n;j++){
 			this->values[i][j] -= val;
		 }
	 }
 };
 //*= operator dahin todorhoilson
void Matrix::operator*=(float val)
 {
 	int i,j;
 	for(i=0;i<m;i++){
 		for(j=0;j<n;j++){
 			this->values[i][j] *= val;
		 }
	 }
 };
//>> operator dahin todorhoilson
 void Matrix::operator>>(int)
 {
 	Matrix ret;
 	ret.setter(n,m);
 	int i,j;
 	for(i=0;i<this->m;i++){
 		for(j=0;j<this->n;j++){
 			ret.values[i][j] = this->values[i][j];
		 }
	 }	 
 	for(i=0;i<m;i++){
 		for(j=0;j<n;j++){
 			this->values[j][i] = ret.values[i][j];
		 }
	 }	 	
 };
int main(){
	
	Matrix p;
	p.setter(3,3);
	p.Input();
	cout<<"p2 = p + 12.5(float)"<<endl;  
	Matrix p2=p+12.5;//p2 = p+ 12.5(float)
	p2.printMatrix();//ur dung harah
	cout<<"p1 = p2 + 0.5"<<endl;
	Matrix p1=p2+0.5;   //p1 = p2 + 0.5
	p1.printMatrix();
	cout<<"p3 = p1 + p2"<<endl;
	Matrix p3=p1+p2;//p3=p1+p2
	p3.printMatrix();
	cout<<"p4 = p1"<<endl;
	Matrix p4=p1;//p4=p1
	p4.printMatrix();
	cout<<"p5 = p2 * p2"<<endl;
	Matrix p5=p2*p2;//p5=p2*p2;
	p5.printMatrix();
	cout<<"p6 = p5 - p2"<<endl;
    Matrix p6=p5-p2;//p6=p5-p2;
    p6.printMatrix();
    cout<<"p6++"<<endl;
    p6++;
    p6.printMatrix();
    cout<<"p6--"<<endl;
    p6--;
    p6.printMatrix();
    cout<<"p6*=2"<<endl;
    p6*=2;
    p6.printMatrix();
    cout<<"p6-=100"<<endl;
    p6-=100;
    p6.printMatrix();
    cout<<"p6+=300"<<endl;
    p6+=300;
    p6.printMatrix();
    //cout<<"i-r mor j-r baganiin utgand value onooh"<<endl;
    //p6.setValue(0,1,5);
    //p6.printMatrix();
    cout<<"p6 transpose"<<endl;
    p6>>1;
    p6.printMatrix();
	return 0;
};
