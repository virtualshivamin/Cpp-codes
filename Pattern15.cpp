/* C++ program to print


*
* * 
* * * 
* * * *
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
	int n;
    cin >> n; 

	for (int i = 1; i <= (2*n-1) ; i++) // Loop for Row 
    {
        int star = i; 
        if ( i > n ){
            star = 2*n-i ;
        }
        
		for (int j = 1; j <= star; j++) 
        {
            cout << "* "; 
        }
		cout << endl;
	}

	return 0;
}



