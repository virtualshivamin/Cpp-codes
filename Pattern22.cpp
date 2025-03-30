/* C++ program to print


**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********


*/


#include <iostream>
using namespace std;

int main()
{
	int n = 5;
    
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    
	for (int i = 1; i <= n; i++) // Loop for First Half 
    { 
        for (int j = 1; j <= n-i+1 ; j++)
        {
            cout << "*";
        }

        for (int k = 1; k <= 2*i-2 ; k++)
        {
            cout << " "; 
        }

        for (int j = 1; j <= n-i+1 ; j++)
        {
            cout << "*";
        }

		cout << endl;
	}
    for (int i = n; i > 0 ; i--) // Loop for Second half 
    { 
        for (int j = 1; j <= n-i+1 ; j++)
        {
            cout << "*";
        }

        for (int k = 1; k <= 2*i-2 ; k++)
        {
            cout << " "; 
        }

        for (int j = 1; j <= n-i+1 ; j++)
        {
            cout << "*";
        }

		cout << endl;
	}
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

	return 0;
}
