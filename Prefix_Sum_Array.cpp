/* C++ program to print

Iss program me pichle do no ka sum kar ke print karo
arr = [1,2,3,4] 
arr = [1,3,6,10] 

*/


#include <iostream>
using namespace std;

int main()
{
    int size; 
    cout << "Input array size : "; 
    cin >> size; 
    int arr[size];
    cout << "Input array numbers :"; 
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = size-1; i > 0; i--)
    {
        if (i>=2)
        {
            arr[i] = arr[i] + arr[i-1] + arr[i-2]; 
        }
    }

    cout << "New array is :"; 
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i] << " ";
    }
    
	return 0;
}
