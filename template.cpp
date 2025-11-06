#include<iostream>
using namespace std;
template<typename T>
T add(T a,T b)
{
  return a+b;	
}
int main()
{
	cout <<add(2,5)<<endl;
	cout <<add(2.5,5.5)<<endl;
	cout <<add(2.12345678,5.1234567890)<<endl;
	return 0;
}