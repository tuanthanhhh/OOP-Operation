#pragma once
#include "Address.h"

using namespace std;

class Person
{
protected:
	string m_name;
	string m_phone;
	string m_email;
	Address address;
public:
	virtual void printInfoDetail();
	virtual void updateInfoDetail();
	void printInfo();
	void updateInfo();
	virtual string getJob()=0;
};
