//
//  main.cpp
//  SortByClass
//
//  Created by SHIVAM SINGH on 21/07/22.
//

#include <iostream>
using namespace std;

class demoArr
{
    int arr[5];
    public:
    void input( )
    {
        for(int i = 0; i<5 ; i++)
        {
            cout<<"Input the array : "<<endl;
            cin>>arr[i];
        }
    }
    void show( )
    {
        for(int i = 0; i<5 ; i++)
        {
            cout<<arr[i]<<endl;
        }
    }
    void sort( )
    {
        int count = 1;
        while (count<5)
        {
            for (int i = 0 ; i<5 -count ; i++)
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
    }
};


int main() {
    
    demoArr obj;
    obj.input();
    cout<<"Display before sort"<<endl;
    obj.show();
    obj.sort();
    cout<<"Display after sort"<<endl;
    obj.show();
    
    
    return 0;
}
