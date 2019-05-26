#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	const int week = 7;
	double provA[week], provB[week], provC[week]; 
	int day;  
    
   
    for(day = 0; day < week; day++)
	{ 
		cout << "Province A, Day " << day + 1 << ": ";	cin >> provA[day]; 
    }
    
   
    for(day = 0; day < week; day++)	
	{
		cout << "Province B, Day " << day + 1 << ": ";	cin >> provB[day];
    }
    
    for(day = 0; day < week; day++)	
	{
		cout << "Province C, Day " << day + 1 << ": ";	cin >> provC[day];
    }
    
    cout << "Displaying Values: " << endl;
    
   
    for(day = 0; day < week; day++)	
	{
		cout << "Province A, Day " << day + 1 << ": ";
		cout << provA[day] << endl;
    }
    
    
    for(day = 0; day < week; day++)	
	{
		cout << "Province B, Day " << day + 1 << ": ";
		cout << provB[day] << endl;
    }
    
    
    for(day = 0; day < week; day++)	{
		cout << "Province C, Day " << day + 1 << ": ";
		cout << provC[day] << endl;
    }

	_getch();
    return 0;
}
