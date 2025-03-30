//
//  main.cpp
//  CompareSalary
//
//  Created by SHIVAM SINGH on 21/07/22.
//

#include <iostream>
using namespace std;

class Emp
{
    char ename[15];
    float sal;
    public :
    void input(char n[15], float s);
    float getsal( );
    char * getname( );
};

float Emp:: getsal()
{
    cout<<"Input salary : "<<endl;
    cin>>sal;
    return sal;
}

char Emp:: getname()
{
    cout<<"Input Name : "<<endl;
    cin>>ename;
    return ename;
}

void Emp :: input(char[15], float s)
{
    
}

int main() {
    
    
    
    return 0;
}
