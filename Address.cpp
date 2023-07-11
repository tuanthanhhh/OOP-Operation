#include "Address.h"

void Address::updateAdress()
{
	cout << "Enter Street: ";
	getline(cin, m_street);
	cout << "Enter City: ";
	getline(cin, m_city);
	cout << "Enter country: ";
	getline(cin, m_country);
	cout << "Enter Zipcode: ";
	cin >> m_zipCode;
	cin.ignore(80, '\n');
	cout << "Complete update Address." << endl;
}
void Address::printAdress()
{
	cout << "Address:  " << endl;
	cout << "   1. Street:   " << m_street << endl;
	cout << "   2. City:     " << m_city << endl;
	cout << "   3. Country:  " << m_country << endl;
	cout << "   4. Zipcode:  " << m_zipCode << endl;
}