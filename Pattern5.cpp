/* C++ program to print


1
2 3
4 5 6
7 8 9 10 


*/


#include <iostream>
using namespace std;

int main()
{
	int n = 5;
    int num = 1; 

	// ith row has i elements
	for (int i = 1; i <= n; i++) 
    {
		for (int j = 1; j <= i ; j++)
        {
            cout << num; 
            num = num + 1; // num++; 
            cout << " "; 
        }
			
		cout << endl;
	}
	return 0;
}
