#pragma once
#include "Person.h"
class Doctor : public Person
{
private:
	string m_major;
	int m_experience;
public:
	void printInfoDetail();
	void updateInfoDetail();
	string getJob();
};
