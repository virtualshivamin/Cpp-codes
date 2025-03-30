/* C++ program to print


        A 
      A B A 
    A B C B A 
  A B C D C B A 
A B C D E D C B A  


*/


#include <iostream>
using namespace std;

int main()
{
	int n = 5;
    

	// ith row has i elements
	for (int i = 1; i <= n; i++) // Loop for Row 
    {
        char ch = 'A'; 

        for (int k = 1; k <= n-i ; k++)
        {
            cout << "  "; 
        }
    
		for (int j = 1; j <= 2*i-1; j++) 
        {
            cout << ch << " "; 

            if (j < i)
            {
                ch++; 
            }
            else
            {
                ch--; 
            }
            
        }

		cout << endl;
	}
	return 0;
}
