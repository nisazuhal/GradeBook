#include <iostream>
#include <string>
#include "gradebook.h"
using namespace std;
GradeBook::GradeBook(string name)
{
	setCourseName(name);
}
void GradeBook::setCourseName(string name)
{
	if(name.size()<=25)
	courseName=name;
	else
	{
		courseName=name.substr(0,25);
		cerr<<"name\""<<name<<"\" exceeds maximum length (25).\n"<<"limiting course name to first 25 characters.\n"<<endl;
	}
}
string GradeBook::getCourseName()const
{
	return coursName;
}
void GradeBook::displayMessage() const
{
	cout<<"welcome to the grade book for\n"<<getCourseName()<<"!\n"<<endl;
}
void GradeBook::determineAverage() const
{
	int total=0;
	unsigned int gradeCounter=1;
	while(gradeCounter<=10)
	{
		cout<<"enter grade:";
		int grade=0;
		cin>>grade;
		total=total+grade;
		gradeCounter=gradeCounter+1;
	}
	int average=total/10;
	cout<<"\total of all 10 grades is:"<<total<<endl;
	cout<<"class average is:"<< average<<endl;
	
}
	
