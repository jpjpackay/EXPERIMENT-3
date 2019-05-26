#include <iostream>
#include <conio.h>
using namespace std;
int main()

{
	int a[10], i, sml, lrg, ttl;
	const int n = 10; 

  cout << "Input ten(10) numbers. " << endl;  
    
    for (i = 0; i < n; i++)
    	      
      
	{
       cout << "Digit no. " << i + 1 << " : ";	cin >> a[i]; 
    }
    
   
	sml = a[1];
	for (i = 0; i < n; i++) 
	
	{
		if(sml > a[i])
			sml = a[i];
	}
	lrg = a[0];
	for (i = 0; i < n; i++) 
	{
		if(lrg < a[i])
			lrg = a[i];
	}
	
	
	
	for (i = 0; i < n; i++)
	
	 {
			ttl += a[i]; 
	}
	
	float ave = ttl / static_cast <float> (n);
	
	cout << "\nThe Smallest Number is: " << sml;
	cout << " \nThe Largest Number is: " << lrg;
	cout << "\nThe Total: " << ttl;
	cout << "\nThe Average: " << ave;
	
	_getch();
    return 0;
}
