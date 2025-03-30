/* C++ program to print


5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5 


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
    
	for (int i = 0; i < 2*n-1; i++) // Loop for First Half 
    { 

        for (int j = 0; j < 2*n-1 ; j++)
        {
            int top = i; 
            int left = j; 
            int right = (2*n-2)-j ; 
            int down = (2*n-2)-i; 

            cout << (n - min ( min(top,down), min(left,right) ) ) << " "; 

        }

		cout << endl;
	}
    

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

	return 0;
}
