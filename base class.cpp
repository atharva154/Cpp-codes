//Write a C++ program to create a base class Person (name and phone number).Derive Academic Performance (Degree, percentage) class from Person class.Display Biodata of the person.
#include <iostream>
using namespace std;

class Person
{
	protected : 
	char name[20];
	int phone;
	public :
	
	int data()
	{
		cout << "Enter the Name: "<< endl;
		cin >> name;
		cout << "Enter the Phone number : "<< endl;
		cin >> phone;
		return 0;
	}
};
	class performance : public Person
	{
		char Grade[5];
		float percentage;
		int m1;
		int eng;
		int physics;
		
		public :
		int putdata()
		{
			cout << "Enter the M1 marks: "<< endl;
			cin >> m1;
			cout << "Enter the marks of English: "<< endl;
			cin >> eng;
			cout << "Enter the marks of Physics: "<< endl;
			cin >> physics;
			
			percentage = (m1+eng+physics)*100/300;
			
			return 0;
		}
		int display()
		{
			cout << "Name of the Person: "<< name << endl;
			cout << "Phone Number of the person is "<< phone << endl;
			cout << "Marks of M1: "<< m1<<endl;
			cout << "Marks of English: "<< eng<<endl;
			cout << "Marks of physics: "<< physics<<endl;
			
			cout << "Percentage Gained are "<< percentage << endl;
			
			if(percentage >=90)
			{
				cout << "O Grade";
			}
			else if(percentage < 90 && percentage >=80)
			{
				cout << "A Grade";
			}
			else if(percentage < 80 && percentage >=70)
			{
				cout << "B Grade";
			}
			return 0;
		}
	};
	int main()
	{
		performance obj;
		obj.data();
		obj.putdata();
		obj.display();
		return 0;
	}






/*Enter the Name: 
atharva
Enter the Phone number : 
3547290
Enter the M1 marks: 
80
Enter the marks of English: 
80
Enter the marks of Physics: 
75
Name of the Person: atharva
Phone Number of the person is 3547290
Marks of M1: 80
Marks of English: 80
Marks of physics: 75
Percentage Gained are 78
B Grade*/
