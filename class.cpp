//Write a C++ program to implement a class Complex which represents the Complex Number data type. Implement the following 1. Constructor (including a default constructor which creates the complex number 0+0i). 2. Overload operator+ to add two complex numbers. 3. Overload operator* to multiply two complex numbers

#include <iostream>
using namespace std;

class complex
{
	int real;
	int imagine;
	public:
	complex()
	{
		real=0;
		imagine=0;
		
	}
	complex(int a,int b)
	{
		real=a;
		imagine=b;
	}
	void show()
	{
		cout << "Complex No. =" << real << "+" << imagine << "i" << endl;
	}
	void display()
	{
		cout << "Addition of Complex No. =" << real << "+" << imagine << "i" << endl;
	}
	void display1()
	{
		cout << "Multiplication of Complex No. =" << real << "*" << imagine << "i" << endl;
	}
	complex operator +(complex &n1)
	{
		complex result;
		result.real= real + n1.real;
		result.imagine= imagine + n1.imagine;
		return result;
	}
	complex operator *(complex &n4)
	{
		complex result;
		result.real= real * n4.real;
		result.imagine= imagine * n4.imagine;
		return result;
	}
};
int main()
{
	complex n1(5,8);
	n1.show();
	complex n2(2,5);
	n2.show();
	complex n3;
	
	
	
	complex n4;
	
	
	int ch;
	cout << "1.Addition of the complex no."<<endl;
	cout << "2.Multiplication of the complex no."<<endl;
	cout << "Enter the Choice(1,2) : "<< endl;
	cin >> ch;
	switch(ch)
	{
		case 1: 
			 
			n3=n1+n2;
			n3.display();
			
		break;
		case 2:
		
			n4=n1*n2;
			n4.display1();
			
		break;
		default :
		
			cout << "Invalid Choice"<<endl;
			
		break;
	}
	return 0;

}










/*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~$ cd B1_18cpp
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_18cpp$ g++ complex.cpp
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_18cpp$ ./a.out
Complex No. =5+8i
Complex No. =2+5i
1.Addition of the complex no.
2.Multiplication of the complex no.
Enter the Choice(1,2) : 
2
Multiplication of Complex No. =10*40i

*/





