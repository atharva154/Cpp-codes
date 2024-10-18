//Overloading is performed
#include<iostream>
using namespace std;

class test 
{
	int hrs,min;
	public:
	void getdata()
	{
		cout << "Enter the time in hours "<<endl;
		cin >> hrs;
		cout << "Enter the time in minutes "<<endl;
		cin >> min;
	}
	void display()
	{
		cout <<hrs<<"hr" <<min<<"min"<<endl;
	}
	friend void operator ++(test & obj);
	friend void operator --(test & obj);
};
void operator ++(test & obj)
{
	obj.hrs=++obj.hrs;
	obj.min=++obj.min;
	cout << "After increment time is :"<< endl;
}
void operator --(test & obj)
{
	obj.hrs=--obj.hrs;
	obj.min=--obj.min;
	cout << "After decrement time is :"<< endl;
}
int main()
{
	test obj;
	obj.getdata();
	obj.display();
	cout << "---------------\n";
	++obj;
	obj.display();
	cout << "---------------\n";
	--obj;
	obj.display();
	cout << "---------------\n";
	return 0;
}







/*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_18cpp$ g++ timeloading.cpp
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_18cpp$ ./a.out
Enter the time in hours 
3
Enter the time in minutes 
46
3hr46min
---------------
After increment time is :
4hr47min
---------------
After decrement time is :
3hr46min
---------------
*/
