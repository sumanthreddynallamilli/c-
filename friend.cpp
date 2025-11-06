#include<iostream>
using namespace std;
class rectangle{
private:
int length;
int width;
public:
rectangle(int l,int w){
	length=l;
	width=w;
}
friend int calculatearea(rectangle r);
};
int calculatearea(rectangle r){
	return r.length*r.width;
}
int main(){
	rectangle rect(10,5);
	int area=calculatearea(rect);
	cout<<"area of rectangle="<<area<<endl;
	return 0;
}