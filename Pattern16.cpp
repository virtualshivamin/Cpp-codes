/* C++ program to print


1             1 
1 2         2 1 
1 2 3     3 2 1 
1 2 3 4 4 3 2 1 


*/


#include <iostream>
using namespace std;

int main()
{
	int n;
    cin >> n; 
    int space = 2*n-1;     
	for (int i = 1; i <= n ; i++) // Loop for Line 
    {
        for (int j = 1 ; j <= i; j++) // number
        {
            cout << j; 
            cout << " "; 
        }

        for (int k = 1 ; k <= space ; k++) // space 
        {
            cout << "  "; 
        }

        for (int l = i; l > 0 ; l--) // number 
        {   
            cout << l; 
            cout << " "; 
        }
        
        cout << endl; 
        space -= 2; 
        
	}

	return 0;
}
