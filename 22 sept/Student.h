#include<iostream>
using namespace std;
#ifndef STUDENT_H

#define STUDENT_H

class Student
{
	int m1,m2,roll;
	public:
		int add;
		void getMarks()
		{
			cout<<"Enter marks 1 : ";
			cin>>m1;
			cout<<"Enter marks 2  : ";
			cin>>m2;
		}
		void displayMarks()
		{
			 add = m1+m2;
		}
};

#endif
