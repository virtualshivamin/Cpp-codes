#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {3,6,8,4,8};
    int key; 
    cout << "Input no to search."; 
    cin >> key; 
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element Found at " << i+1; 
            break;
        }
        
    }
    

    return 0; 
}
