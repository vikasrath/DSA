#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter the num of rows :";
    cin >> n;

    // upper part
    for (int i = 0; i < n; i++)    {

        //  space 
        for (int sp= 0; sp< n-i-1; sp++){
            cout<<" ";
        }
         //  star 
        for (int str= 0; str<=i; str++){
            cout<<"* ";
        }
        cout << endl;

    }

    // lower part
    for(int i =0; i<n-1; i++){
         // lower part

        for(int sp2 = 0; sp2 <= i; sp2++){
            cout<<" ";
        }
        for(int str2 = 0; str2 < n-i-1; str2++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}