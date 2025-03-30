//
//  main.cpp
//  SumOfDiagonal
//
//  Created by SHIVAM SINGH on 23/07/22.
//

#include <iostream>
using namespace std;

class sqr_mat
{
    int arr[5][5];
    public :
        void input( );
        int diag_sum( );
        void display( );

};

void sqr_mat :: input()
{
    int i,j;
    for (i = 0 ; i < 5 ; i++ ) {
        for (j = 0 ; j < 5 ; j++ ) {
            cout<<"Input a number : "<<endl;
            cin>>arr[i][j];
        }
    }
}

void sqr_mat :: display()
{
    for (int i = 0 ; i < 5 ; i++ ) {
        for (int j = 0 ; j < 5 ; j++ ) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int sqr_mat :: diag_sum()
{
    int i,j,sum=0,t=4;
    for (i = 0 ; i < 5 ; i++ ) {
        for (j = 0 ; j < 5 ; j++ ) {
            if ( i == j ) {
                sum = sum + arr[i][j];
            }
        }
        sum = sum + arr[i][t];
        t--;
    }
    sum = sum - arr[2][2];
    return sum;
}

int main()
{
    sqr_mat obj;
    obj.input();
    obj.display();
    
    cout<<"Sum of Diagonal is : "<< obj.diag_sum()<<endl;
    
    return 0;
}

