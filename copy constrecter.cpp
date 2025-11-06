#include<iostream>
using namespace std;
class student
{
	public:
		int rollno;
		student(int r)
		{
			rollno=r;
			
		}
		student(const student &s)
		{
			rollno=s.rollno;
		}
		
		void display()
		{
			cout<<"the roll no of student is :"<<rollno<<endl;
		}
		
};
int main()
{
	student s(100);
	s.display();
	student s1=s;
	s1.display();
	return 0;
}