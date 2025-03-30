//
//  main.cpp
//  StructureUnion
//
//  Created by SHIVAM SINGH on 28/06/22.
//

#include <iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep;

int main() {
    // insert code here...
    
//    struct employee shivam;
    ep shivam; 
    shivam.eId = 001;
    shivam.favChar = 'a';
    shivam.salary = 120000000;
    cout<<"Shivam Employee ID : "<<shivam.eId<<endl;
    cout<<"Shivam Favourite Charactor : "<<shivam.favChar<<endl;
    cout<<"Shivam Salary : "<<shivam.salary<<endl;

    
//    std::cout << "Hello, World!\n";
    return 0;
}
