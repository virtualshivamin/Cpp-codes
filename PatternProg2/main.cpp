//
//  main.cpp
//  PatternProg2
//
//  Created by SHIVAM SINGH on 25/08/22.
//

#include <iostream>
using namespace std;
int main() {
    
    int n;
    cout<<"Input value of n : " << endl;
    cin>>n;
    
    for (int i = n ; i > 0 ; i-- )
    {
        for (int j = 1 ; j <= i ; j++ ) {
            cout<<j;
        }
        for (int j = i ; j > 0 ; j-- ) {
            cout<<j;
        }
        cout<<endl;
    }
    
    
    return 0;
}
