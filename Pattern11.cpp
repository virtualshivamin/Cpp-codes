/* C++ program to print


* * * * * 
* * * *
* * *
* *
*


*/


#include <iostream>
using namespace std;

int main()
{
	int n = 5;

	// ith row has i elements
	for ( int i = n; i >0 ; i-- ) // Loop for Row 
    {
		for (int j = 1; j <= i; j++) // Loop for Column 
        {
            cout << "*"; 
            cout << " "; 
        }
			
		cout << endl;
	}
	return 0;
}
