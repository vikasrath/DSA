#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter the num of rows :";
    cin >> n;

  
    // upper part
    for(int i=0; i<n; i++){
        // spaces
        for(int sp=0; sp<i; sp++){
            cout<<" ";
        }
        // star 
        for (int str = 0; str < n-i; str++)
        {
            cout<<"* ";
        }
        cout<<endl;  
    }

    // lower part

    for (int i = 0; i < n-1; i++)
    {   
        // spaces
        for(int sp = 0; sp<n-i-1-1; sp++){
            cout<<" ";
        }
        //star
        for(int str=0; str<i+2; str++){
            cout<<"* ";
        }
        cout<<endl;
    }
    

    return 0;
}