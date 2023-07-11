#include "Student.h"

void Student::printInfoDetail()
{
	cout << "     Student ID:  " << m_studentID << endl;
	cout << "     Grade :       " << m_grade << endl;
}
void Student::updateInfoDetail()
{
	cout << "Enter Student ID: ";
	cin >> m_studentID;
	while (m_studentID <= 0)
	{
		if (cin.fail())
		{
			cin.clear(); // reset failbit
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
			m_studentID = 0;
		}
		cout << "The Number of Student ID is not correct. \nChoose again: ";
		cin >> m_studentID;
	}
	cout << "Enter grade: ";
	cin >> m_grade;
	while (m_grade <= 0)
	{
		if (cin.fail())
		{
			cin.clear(); // reset failbit
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
			m_grade = 0;
		}
		cout << "The Number of Grade is not correct. \nChoose again: ";
		cin >> m_grade;
	}
	cin.ignore(80, '\n');
}
string Student::getJob()
{
	string Job = "Student";
	return Job;
}