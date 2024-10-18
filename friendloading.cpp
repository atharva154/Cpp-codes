//Friend function Overloading is performed
#include<iostream>
using namespace std;

class test 
{
	int a,b;
	public:
	void getdata()
	{
		cout << "Enter the value of a is "<<endl;
		cin >> a;
		cout << "Enter the value of b is "<<endl;
		cin >> b;
	}
	void display()
	{
		cout <<"a is "<<a << endl;
		cout <<"b is "<<b << endl;
	}
	friend void operator ++(test & obj);
	friend void operator --(test & obj);
	friend void operator ++(test & obj,int);
};
void operator ++(test & obj)
{
	obj.a=++obj.a;
	obj.b=++obj.b;
}
void operator --(test & obj)
{
	obj.a=--obj.a;
	obj.b=--obj.b;
}
void operator ++(test & obj,int)
{
	obj.a=obj.a++;
	obj.b=obj.b++;
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
	obj++;
	obj.display();
	return 0;
}





/*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_18cpp$ g++ friendloading.cpp
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_18cpp$ ./a.out
Enter the value of a is 
15
Enter the value of b is 
30
a is 15
b is 30
---------------
a is 16
b is 31
---------------
a is 15
b is 30
---------------
a is 15
b is 30

*/
