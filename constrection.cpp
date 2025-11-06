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
		
		void display()
		{
			cout<<"the roll no of student is :"<<rollno;
		}
		
};
int main()
{
	student s(100);
	s.display();
	return 0;
}