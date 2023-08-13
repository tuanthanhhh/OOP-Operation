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
	while (m_zipCode <= 0)
	{
		if (cin.fail())
		{
			cin.clear(); // reset failbit
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
			m_zipCode = 0;
		}
		cout << "The Number of Zipcode is not correct. Choose again: ";
		cin >> m_zipCode;
	}
	cout << "Complete update Address." << endl;
}
void Address::printAdress()
{
	cout << "Address:  " << endl;
	cout << "    Street:   " << m_street << endl;
	cout << "    City:     " << m_city << endl;
	cout << "    Country:  " << m_country << endl;
	cout << "    Zipcode:  " << m_zipCode << endl;
}