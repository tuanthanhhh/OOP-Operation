#pragma once
#include "Person.h"

class Student : public Person
{
public:
	void printInfoDetail();
	void updateInfoDetail();
	string getJob();
private:
	int m_studentID;
	int m_grade;
};
