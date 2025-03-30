/* C++ program to print


1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 


*/


#include <iostream>
using namespace std;

int main()
{
	int n;
    cin >> n; 
    int no = 1 ;     
	for (int i = 1; i <= n ; i++) // Loop for Row 
    {
        for (int j = 1 ; j <= i; j++)
        {
            cout << no ; 
            cout << " "; 
            no++;  
        }
        cout << endl; 

	}

	return 0;
}
