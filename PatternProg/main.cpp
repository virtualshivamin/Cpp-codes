//
//  main.cpp
//  PatternProg
//
//  Created by SHIVAM SINGH on 04/08/22.
//

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Input no : " << endl;
    cin >> n ;
    int i , j ;
    char a ;
    for ( i = 0 ; i < n ; i++ )
    {
        a = (char)i ;
        for( j = i ; j < j+n ; j++ )
        {
            cout << a << " ";
            a++;
        }
        cout << endl ;
    }

    return 0;
}
