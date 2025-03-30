//
//  main.cpp
//  ArmstrongNumber
//
//  Created by SHIVAM SINGH on 20/07/22.
//

#include <iostream>
using namespace std;


class Armstrong {
    int num;
    public :
    void input(int x) ;
    void checkARMSTRONG ( );
};

void Armstrong :: input(int x)
{
    num = x;
}

void Armstrong:: checkARMSTRONG()
{
    
    int x = num , temp , cube = 0;
    while ( x > 0 )
    {
        temp = x%10;
        cube  = cube + (temp*temp*temp);
        x = x/10;
    }
    if ( cube==num )
    {
        cout<<"Armstrong Number"<<endl;
    }
    else
    {
        cout<<"Not Armstrong Number"<<endl;
    }
}

int main() {
    Armstrong obj;
    obj.input(153);
    obj.checkARMSTRONG();
    
    return 0;
}

