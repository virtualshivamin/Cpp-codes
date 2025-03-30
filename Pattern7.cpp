/* C++ program to print


* * * *
* * * *
* * * *
* * * *


*/


#include <iostream>
using namespace std;

int main()
{
	int n = 5;

	// ith row has i elements
	for (int i = 1; i <= n; i++) 
    {
		for (int j = 1; j <= n ; j++)
        {
            cout << "*" ; 
            cout << " "; 
        }
			
		cout << endl;
	}
	return 0;
}
