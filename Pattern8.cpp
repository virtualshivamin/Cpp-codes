/* C++ program to print


1
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 


*/


#include <iostream>
using namespace std;

int main()
{
	int n , start ;
    cin >> n ; 

	// ith row has i elements
	for (int i = 1; i <= n; i++) 
    {
        if (i%2 == 0)
            start = 0; 
        else
            start = 1; 
        
		for (int j = 1; j <= i ; j++)
        {
            cout << start;
            cout << " ";  
            start = 1 - start ; 
        }
		
		cout << endl;
	}
	return 0;
}
