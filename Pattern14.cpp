/* C++ program to print


    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *


*/


#include <iostream>
using namespace std;

int main()
{
	int n = 5;

	// ith row has i elements
	for (int i = 1; i <= n ; i++) 
    {
      for (int k = 0 ; k < n-i; k++)
      {
        cout << " "; 
      }
      
		    for (int j = 1; j <= (2*i-1) ; j++)
        {
            cout << "*"; 
        }
			
      cout << endl;
    }
    for ( int i = n ; i > 0 ; i-- ) 
    {
      for (int k = 0 ; k < n-i; k++)
      {
        cout << " "; 
      }
      
		    for (int j = 1; j <= (2*i-1) ; j++)
        {
            cout << "*"; 
        }
			
      cout << endl;
    }

	return 0;
}
