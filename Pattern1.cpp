/* C++ program to print



1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5



*/


#include <iostream>
using namespace std;

int main()
{
	int n = 5;

	// ith row has i elements
	for (int i = 1; i <= n; i++) 
    {
		for (int j = 1; j <= n; j++)
        {
            cout << j; 
            cout << " "; 
        }
			
		cout << endl;
	}
	return 0;
}
