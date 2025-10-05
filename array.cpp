//Write a C++ Program to dispay Names,employee_id,salaryof 3employees.Declare the class of eployee. Create an array of class objects. Read and display the contents of the array.

#include<iostream>
using namespace std;

class player
{
	private:
	char name[20];
	char team[20];
	float average;
	public:	
	int getdata()
	{
		cout << "Enter the name of the player: "<< endl;
		cin >> name;
		cout << "Enter the team name: "<< endl;
		cin >> team;
		cout << "Enter the batting average: "<< endl;
		cin >> average;
	
		return 0;
	}
	int putdata()
	{
		cout << "Player Name : "<< name<< endl;
		cout << "Team Name : "<< team << endl;
		cout << "Batting Average : "<< average << endl;
		return 0;	
	}
};

	int main()
	{
		int i,j;
		player array[3];
		for(i=0;i<=3;i++)
		{
			array[i].getdata();
		}
		for(i=0;i<=3;i++)
		{
			array[i].putdata();
		}
		return 0;
	}



/*Player Name : Sachin
Team Name : MI
Batting Average : 8
Player Name : M.S.Dhoni
Team Name : CSK
Batting Average : 9
Player Name : Rohit
Team Name : MI
Batting Average : 8
*/
