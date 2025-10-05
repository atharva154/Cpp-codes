//Write a C++ program to make operations for a publishing company which does marketing for book and audio cassette versions. Create a class publication that stores the title (a string) and price (type float) of publications. From this class derive two classes: book which adds a page count (type int) and tape which adds a playing time in minutes (type float). Write a program that instantiates the book and tape class, allows users to enter data and displays the data members. If an exception is caught, replaceall the data member values with zero values. Use virtual functions

#include <iostream>
using namespace std;

class publication
{
	protected:
	string title;
	float price;
	
	public:
	void getdata()
	{
		cout << "Enter the title of the book: "<<endl;
		cin >> title;
		cout << "Enter the price of the book: "<<endl;
		cin >> price;
	}
	void putdata()
	{
		cout << "Title of the Book is "<< title << endl;
		cout << "Price of the Book is "<< price << endl;
	}
};
class Book:public publication 
{
	int page;
	public:
	void getdata()
	{
		publication::getdata();
		cout << "Enter the Page count: "<< endl;
		cin >> page ;
		
	}
	
	void putdata()
	{
		publication :: putdata();
		cout << "Page count of the Book is "<< page << endl;
		try
		{
			if(page==0)
			{
				throw page;
			}
		}
		catch(int page)
		{
			cout<< "Exception Caught"<< endl;
		}
	}
};
class Tape:public publication 
{
	int play ;
	public:
	void getdata1()
	{
		publication :: getdata();
		cout << "Enter the Play time: "<< endl;
		cin >> play ;
		
	}
	void putdata1()
	{
		publication :: putdata();
		cout << "Playing time of the Book is "<< play  << endl;
		try
		{
			if(play==0)
			{
				throw play;
			}
		}
		catch(int play)
		{
			cout<< "Exception Caught"<< endl;
		}
	}
};


int main()
{
	Book obj;
	Tape time;
	
	cout << "1.Book"<< endl;
	cout << "2.Tape"<< endl;
	
	int ch;
	cout << "Enter the Choice(1,2): "<< endl;
	cin >> ch;
	
	switch(ch)
	{
	case 1 :
	
		obj.getdata();
		obj.putdata();
		
	break;
	
	case 2 :
	
		time.getdata1();
		time.putdata1();
		
	break;
	
	default: 
	
		cout << "Wrong choice"<< endl;
	break;
	}
	return 0; 
}





/*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_18cpp$ g++ assignment6.cpp
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_18cpp$ ./a.out
1.Book
2.Tape
Enter the Choice(1,2): 
1
Enter the title of the book: 
Power
Enter the price of the book: 
765
Enter the Page count: 
0
Title of the Book is Power
Price of the Book is 765
Page count of the Book is 0
Exception Caught

pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_18cpp$ g++ assignment6.cpp
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_18cpp$ ./a.out
1.Book
2.Tape
Enter the Choice(1,2): 
1
Enter the title of the book: 
Power
Enter the price of the book: 
765
Enter the Page count: 
0
Title of the Book is Power
Price of the Book is 765
Page count of the Book is 0
Exception Caught


*/
















