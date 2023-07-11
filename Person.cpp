#include "Person.h"
void Person:: printInfo()
{
	cout << "Information:    " << endl;
	cout << "    1. Name:    " << m_name << endl;
	cout << "    2. Phone:   " << m_phone << endl;
	cout << "    3. Email:   " << m_email << endl;
	address.printAdress();
}
void Person:: updateInfo()
{
	cout << "Enter Name: ";
	getline(cin, m_name);
	cout << "Enter Phone: ";
	getline(cin, m_phone);
	cout << "Enter Email: ";
	getline(cin, m_email);
	address.updateAdress();
	cout << "Complete update informatione" << endl;
}
virtual string getJob();