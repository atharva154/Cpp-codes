#include<iostream>
using namespace std;

class loading
{
	int a,b;
	public:
	
	loading(int x,int y)
	{
		a=x;
		b=y;
	}
	void show()
	{
		cout << "a is "<< a << endl;
		cout << "b is "<< b << endl;
	}
	void operator -()
	{
		a=-a;
		b=-b;
	}
	void operator ++()
	{
		a=++a;
		b=++b;
	}
	void operator --()
	{
		a=--a;
		b=--b;
	}
	void operator --(int)
	{
		a=a--;
		b=b--;
	}
};
int main()
{
	loading obj(-10,30);
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
	cout << "---------------\n";
	obj--;
	obj.show();
	return 0;	
}










/*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_18cpp$ g++ overloading.cpp
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_18cpp$ ./a.out
a is -10
b is 30
---------------
a is 10
b is -30
---------------
a is 11
b is -29
---------------
a is 10
b is -30
---------------
a is 10
b is -30

*/









