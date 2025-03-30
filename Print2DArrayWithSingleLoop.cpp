/* C++ program to print

Iss program me pichle do no ka sum kar ke print karo
arr = [1,2,3,4] 
arr = [1,3,6,10] 

*/


#include <iostream>
using namespace std;

int main()
{
    int size,i,j; 
    cout << "Input array size : "; 
    cin >> size; 
    int arr[size][size];
    cout << "Input array numbers :"; 
    for (i = 0; i < size; i++)
    {
        for(j=0; j < size; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout << "Array Print :"; 
    for(i = 0; i < size; i++)
    {
        for(j=0 ; j<size; j++)
        {
            cout<<arr[i][j] << " ";
        }
        cout << endl; 
    }

    for (i = 0; i < size; i++)
    {
        cout << arr[0][i] << " ";
    }
	return 0;
}
