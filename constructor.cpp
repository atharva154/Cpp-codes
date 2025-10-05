//Write a C++ program to develop a program in C++ to create a database of a student's information system containing the following information: Name,Roll number, Class, Division, Date of Birth and Telephone number.Construct the database with suitable member functions. Make use of constructor, default constructor, copy constructor, destructor, count number of students

#include <iostream>
using namespace std;

class Student {
private:
	string name;
	string class_name;
	string division;
	string dob;
	long int telephone;

public:
	Student () {
		name = "No Name";
		class_name = "No Class!";
		division = "No Div!";
		dob = "No Date!";
		telephone = 0000000000;
	}

	Student (string nm, string cn, string div, string date, long int tp) {
		name = nm;
		class_name = cn;
		division = div;
		dob = date;
		telephone = tp;
	}

	Student (Student &another_student) {
		name = another_student.name;
		class_name = another_student.class_name;
		division = another_student.division;
		dob = another_student.dob;
		telephone = another_student.telephone;
	}

	~Student () {
		cout << "Destructor executed!" << endl;
	}

	void print_data() {
		cout << "Name: " << name << endl;
		cout << "Class Name: " << class_name << endl;
		cout << "Division: " << division << endl;
		cout << "Date Of Birth: " << dob << endl;
		cout << "Telephone: " << telephone << endl;
	}
};

int main () {
	cout << "Default Constructor: " << endl;
	Student databaseDefault;
	databaseDefault.print_data();
	cout << endl;

	cout << "Parameterized Constructor: " << endl;
	Student databaseParameterized("Atharva", "B. Tech", "B", "15/04/2005", 9405678513);
	databaseParameterized.print_data();
	cout << endl;

	cout << "Copy Constructor: " << endl;
	Student databaseCopy = databaseParameterized;
	databaseCopy.print_data();
	cout << endl;
}




/*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_18$ g++ Assignment_3.cpp
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_18$ ./a.out
Default Constructor: 
Name: No Name
Class Name: No Class!
Division: No Div!
Date Of Birth: No Date!
Telephone: 0

Parameterized Constructor: 
Name: Adarsh
Class Name: B. Tech
Division: B
Date Of Birth: 11/02/2004
Telephone: 9405619353

Copy Constructor: 
Name: Adarsh
Class Name: B. Tech
Division: B
Date Of Birth: 11/02/2004
Telephone: 9405619353

Destructor executed!
Destructor executed!
Destructor executed!
*/
