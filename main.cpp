#include "Address.h"
#include "Doctor.h"
#include "Person.h"
#include "Student.h"

vector<Person*> personList;
int n_Student = 0, n_Doctor = 0;

int main()
{
	cout << "===============================================================================================\n" << endl;
	cout << "                                        OOP OPERATIONS\n" << endl;
	cout << "===============================================================================================\n" << endl;

	cout << "Number Of Students:   ";
	cin >> n_Student;
	while (n_Student <= 0)
	{
		if (cin.fail())
		{
			cin.clear(); // reset failbit
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
			n_Student = 0;
		}
		cout << "The Number is not correct. \nChoose again: ";
		cin >> n_Student;
	}
	cout << "Number Of Doctor:     ";
	cin >> n_Doctor;
	while (n_Doctor <= 0)
	{
		if (cin.fail())
		{
			cin.clear(); // reset failbit
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
			n_Doctor = 0;
		}
		cout << "The Number is not correct. \nChoose again: ";
		cin >> n_Doctor;
	}
	cin.ignore(80, '\n');
	cout << "\n" << endl;
	for (int i = 0; i < n_Student; i++)
	{
		cout << "Enter Information: \n" << endl;
		cout << "Student " << i + 1 << ":  " << endl;
		Student* student =new Student();
		student->updateInfo();
		student->updateInfoDetail();
		personList.push_back(student);
	}

	for (int i = 0; i < n_Doctor; i++)
	{
		cout << "\n" << endl;
		cout << "Doctor " << i + 1 << ":  " << endl;
		Doctor* doctor = new Doctor();
		doctor->updateInfo();
		doctor->updateInfoDetail();
		personList.push_back(doctor);
	}

	cout << "===============================================================================================\n" << endl;

	for (int i = 0; i < personList.size(); i++)
	{
		cout << "\n" << endl;
		cout << "Person " << i + 1 << ": " << endl;
		personList[i]->printInfo();
		cout << "More:   " << endl;
		cout << "     Job:" << personList[i]->getJob() << endl;
		personList[i]->printInfoDetail();
	}
	getchar();
	return 0;
}