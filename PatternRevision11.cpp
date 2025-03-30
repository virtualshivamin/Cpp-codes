/*

1
01
101
0101
10101

*/
#include <iostream>
using namespace std;

int main() {

    int n=5,start;
    for (int i = 0; i < n; i++)
    {
        if (i%2==0)
                start=1;
            else
                start=0;
        for (int j = 0; j <= i; j++)
        {
            cout<<start;
            /* Logic to change the number from 0 to 1 and 1 to 0
            start = 1 - start; // Logic 1 
            start = start^1; // Logic 2 
            start = !start; // Logic 3
            */
           start = !start;
        }
        cout<<endl;
    }
    
    return 0;
}
