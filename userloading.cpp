//Overloading is performed
#include<iostream>
using namespace std;

class test 
{
	int a;
	public:
	test()
	{
		cout << "Enter value of a is "<< endl;
		cin >> a;
		
	}
	void show()
	{
		cout << "a is "<< a << endl;
		
	}
	void operator -()
	{
		a=-a;
	}
	void operator ++()
	{
		a=++a;
	}
	void operator --()
	{
		a=--a;
	}
};

int main()
{
	test obj;
	
	obj.show();
	cout << "---------------\n";
	-obj;
	obj.show();
	cout << "---------------\n";
	++obj;
	obj.show();
	cout << "---------------\n";
	--obj;
	obj.show();
	return 0;	
}




/*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_18cpp$ g++ userloading.cpp
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_18cpp$ ./a.out
Enter value of a is 
16
a is 16
---------------
a is -16
---------------
a is -15
---------------
a is -16
*/
