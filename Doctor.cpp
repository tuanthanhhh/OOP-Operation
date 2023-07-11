#include "Doctor.h"

void Doctor::printInfoDetail()
{
	cout << "    4. Major:  " << m_major << endl;
	cout << "    5. Experience:       " << m_experience << endl;
}
void Doctor::updateInfoDetail()
{
	cout << "Enter Major: ";
	getline(cin, m_major);
	cout << "Enter Experience: ";
	cin >> m_experience;
	cin.ignore(80, '\n');
}
string Doctor::getJob()
{
	string Job = "Doctor";
	return Job;
}