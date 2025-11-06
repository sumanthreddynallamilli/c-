#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream file("cpp.txt");
	file<<"welcome to cpp";
	cout<<"file is created";
	return 0;
}
