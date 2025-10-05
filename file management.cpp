//:Write a C++ program to Create a class of employees (data members name,DOB, mobile). Write a function to accept the data and display the information. Use exception handling while accepting the data. e.g in DOB day value should be in between 1 to 31, month value should be in between 1 to 12 etc. Store and retrieve a data from the file.
#include<iostream>
#include<fstream>

using namespace std;

class employee
{
	string name;
	long int mobile;
	int DD;
	int MM;
    int YY;

    public:

    
	void getdata()
	{
		cout<< "Enter the name: ";
		cin >> name;
		cout << "Enter the mobile no. ";
		cin >> mobile;
		cout << "Day of Birth: "<< endl;
		cin >> DD;
		cout << "Month of Birth: "<< endl;
		cin >> MM;
		cout << "Year of Birth: "<< endl;
		cin >> YY;
		
        fstream ob;
    ob.open("file",ios::app);
		try{
			if((DD>1 && DD<32) && (MM>1 && MM<12))
			{
		
			ob << name<< endl;
			ob << mobile<< endl;
			ob << DD << "/"<< MM << "/"<< YY <<endl;
			
			}
				
		
		else
        {
			throw 505;
		}
        }
		catch(int DD)
		{
			cout << "Exception Caught"<<endl;
		}
	ob.close();
	
	}
    
};

int main()
{
	employee ab;
	ab.getdata();
    fstream obj;
    obj.open("file",ios::in);
    while(obj)
    {
        char ch;
        obj.get(ch);
        cout << ch;
    }
    obj.close();
	return 0;
}
