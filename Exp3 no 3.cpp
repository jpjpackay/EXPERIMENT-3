#include <iostream>
#include <conio.h>
using namespace std;
int main()

{
	char a[100];
	int i, j;
		
	cout << "Enter number of array (up to 100): ";	cin >> j;
	cout << "Enter " << j << " variables: ";
	
	for(i = 0; i < j ; i++)	
	{
   		cin >> a[i];
	}
	
	cout << "\nReverse of variables: ";

	for (i = j; i >= 0; i--)	
	{ 
        cout << a[i];
    }
	
	cout << "\n\nSize of Array: " << j;
	
	_getch();
    return 0;
}
