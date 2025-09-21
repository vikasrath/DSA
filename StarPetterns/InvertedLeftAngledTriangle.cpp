#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter the num of rows :";
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        //  space 
        for (int sp= 0; sp <= i; sp++){
            cout<<" ";
        }
         //  star 
        for (int str= 0; str<n-i; str++){
            cout<<"*";
        }
        cout << endl;
    }

    return 0;
}