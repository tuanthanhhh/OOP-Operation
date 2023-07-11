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
	void printInfo();
	void updateInfo();
	string getJob();
};
