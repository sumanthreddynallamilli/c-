#include<iostream>
using namespace std;
inline int add(int a,int b){
	return a+b;
}
inline double add(double a,double b){
	return a+b;
}
inline int add(int a,int b,int c){
	return a+b;
}
int main()
{
	cout<<"add(2,3)="<<add(2,3)<<endl;
	cout<<"add(1.1,1.1)="<<add(1.1,1.1)<<endl;
	cout<<"add(1,2,3)="<<add(1,2,3)<<endl;
	return 0;
}