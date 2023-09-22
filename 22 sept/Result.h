#ifndef RESULT_H
#define RESULT_H
#include "Student.h"
#include "Sportsmark.h"



class Result : public Student,public Sportsmark
{
float avg;
	int total;
	
	public:
		void displayAvg()
		{
			Student::getMarks();
			Sportsmark::getSmarks();
			Student::displayMarks();
			total=(add+sm);
			avg=float(total/3);
			cout<<"Avg of student is: "<<float(avg);
		}
};

#endif
