#ifndef SPORTSMARK_H
#define SPORTSMARK_H
#include<iostream>
using namespace std;

class Sportsmark
{
	public :
		int sm;
		void getSmarks()
		{
			cout<<"Enter marks for sports : ";
			cin>>sm;
		}
};

#endif
