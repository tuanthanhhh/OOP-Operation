#include "Student.h"

void Student::printInfoDetail()
{
	cout << "    4. Job:     " << getJob() << endl;
	cout << "    5. Student ID:  " << m_studentID << endl;
	cout << "    6. Grade :       " << m_grade << endl;
}
void Student::updateInfoDetail()
{
	cout << "Enter Student ID: ";
	cin >> m_studentID;
	cout << "Enter grade: ";
	cin >> m_grade;
	cin.ignore(80, '\n');
}
string Student::getJob()
{
	string Job = "Student";
	return Job;
}