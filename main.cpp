#include "Address.h"
#include "Doctor.h"
#include "Person.h"
#include "Student.h"

vector<Person> personList;
int n_Student = 0, n_Doctor = 0;

int main()
{
	cout << "===============================================================================================\n" << endl;
	cout << "                                        OOP OPERATIONS\n" << endl;
	cout << "===============================================================================================\n" << endl;

	cout << "Number Of Students:   ";
	cin >> n_Student;
	cout << "Number Of Doctor:     ";
	cin >> n_Doctor;
	cin.ignore(80, '\n');

	for (int i = 0; i < n_Student; i++)
	{
		Student student;
		student.updateInfo();
		student.updateInfoDetail();
		personList.push_back(student);
	}

	for (int i = 0; i < n_Doctor; i++)
	{
		Doctor doctor;
		doctor.updateInfo();
		doctor.updateInfoDetail();
		personList.push_back(doctor);
	}

	for (int i = 0; i < n_Student + n_Doctor; i++)
	{
		cout << "Person " << i + 1 << ": " << endl;
		personList[i].printInfo();
	}
	getchar();
	return 0;
}