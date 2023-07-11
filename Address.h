#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Address
{
private:
	string m_street;
	string m_city;
	string m_country;
	int m_zipCode;

public:
	void updateAdress();
	void printAdress();
};
