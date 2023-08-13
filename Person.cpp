#include "Person.h"
void Person:: printInfo()
{
	cout << "Information:    " << endl;
	cout << "     Name:    " << m_name << endl;
	cout << "     Phone:   " << m_phone << endl;
	cout << "     Email:   " << m_email << endl;
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

void Person:: printInfoDetail()
{

}
void Person:: updateInfoDetail()
{

}
string getJob();