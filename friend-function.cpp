//Write a C++ Program to Create class DM which stores the value of distancesin meters and centimeters. Read values for the class objects and add one object of DM with another object and find greater distance from two objects. Use a friend function to carry out the addition operation. The display should be in the format of meters and centimeters

#include<iostream>
using namespace std;

class DM
{
	int m,cm;
	public:
	
	int getdata()
	{
		cout << "Enter the value in Meter: "<< endl;
		cin >> m;
		cout << "Enter the value in Centimeter: "<< endl;
		cin >> cm;
		return 0;
	}
	int putdata()
	{
		cout << "Value in Meter: "<< m << endl;
		cout << "Value in Centimeter: "<< cm << endl;
		return 0;
	}
		friend int add(DM D1,DM D2);
		friend int compare(DM D1,DM D2);
};
	int add(DM D1,DM D2)		
	{
		int add,add1;
		add = D1.m + D2.m;
		add1 = D1.cm + D2.cm;
		cout << "Addition of numbers in meter: "<< add<< endl;
		cout << "Addition of numbers in centimeter: "<< add1<< endl;
		return 0;
	}
	int compare(DM D1,DM D2)
	{
		int a,b;
		a= D1.m *100+D1.cm;
		b= D2.m*100+D2.cm;
		if(a>b)
		{
			cout << "First object is Greater"<< endl;
		}
		else
		{
			cout << "Second Object is Greater"<< endl;
		}
		return 0;
	}
	int main()
	{
		int n;
		do
	{
		DM D1,D2;
		cout << "Frist Object: "<< endl;
		D1.getdata();
		D1.putdata();
		cout << "Second Object:"<< endl;
		D2.getdata();
		D2.putdata();
		
		int ch;
		cout << "1.Add two numbers: "<< endl;
		cout << "2.Compare two numbers: "<< endl;
		cout << "Enter the Choice: "<< endl;
		cin >> ch;
		
		switch(ch)
		{
			case 1:
				cout << "Addition of two numbers : "<< endl;
				add(D1,D2);
			break;
			
			case 2:
				cout << "Compare two numbers : "<< endl;
				compare(D1,D2);
			break;
			
			default: 
				cout << "Wrong Choice"<< endl;
				break; 
	
		}
		cout << "1.Want to continue:"<< endl;
		cout << "2.Want to stop:"<< endl;
		cout << "Enter the choice: "<< endl;
		cin >> n;
	}
	while(n==1);
	
	return 0;
}
	
	
	
	
/*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_18cpp$ g++ assignment2.cpp
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_18cpp$ ./a.out
Frist Object: 
Enter the value in Meter: 
10
Enter the value in Centimeter: 
200
Value in Meter: 10
Value in Centimeter: 200
Second Object:
Enter the value in Meter: 
20
Enter the value in Centimeter: 
400
Value in Meter: 20
Value in Centimeter: 400
1.Add two numbers: 
2.Compare two numbers: 
Enter the Choice: 
1
Addition of two numbers : 
Addition of numbers in meter: 30
Addition of numbers in centimeter: 600
1.Want to continue:
2.Want to stop:
Enter the choice: 
1
Frist Object: 
Enter the value in Meter: 
57
Enter the value in Centimeter: 
39
Value in Meter: 57
Value in Centimeter: 39
Second Object:
Enter the value in Meter: 
33
Enter the value in Centimeter: 
99
Value in Meter: 33
Value in Centimeter: 99
1.Add two numbers: 
2.Compare two numbers: 
Enter the Choice: 
2
Compare two numbers : 
First object is Greater
1.Want to continue:
2.Want to stop:
Enter the choice: 


*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
