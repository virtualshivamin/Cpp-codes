//
//  main.cpp
//  BubbleSort.cpp
//
//  Created by SHIVAM SINGH on 26/06/22.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    int arr[10];
    cout<<"Input no : "<<endl;
    for(int i = 0 ; i<10 ; i++)
    {
        cin>>arr[i];
    }
    int count = 1;
    while (count<10)
    {
        for (int i = 0 ; i<10 -count ; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        count++;
    }
    cout<<"array arranged in ascending order is : "<<endl<<"{ ";
    for (int i = 0; i<10 ; i++)
    {
        cout<<arr[i]<<" , ";
    }
    cout<<"}"<<endl;
//    std::cout << "Hello, World!\n";
    return 0;
}



