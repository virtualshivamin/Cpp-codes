//
//  main.cpp
//  reverseNumber
//
//  Created by SHIVAM SINGH on 19/07/22.
//

#include <iostream>
using namespace std;
int main()
{
    
    int n;
    cout<<"Input a number : "<<endl;
    cin>>n;
    cout<<"Number Input : "<< n << endl;
    
    int x=0 , temp;
    while(n>0)
    {
        temp = n % 10 ;
        x = ( x*10 ) + temp ;
        n = n / 10 ;
    }
    
    cout<<"Number output : "<< x << endl;

    
    return 0;
}
