#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter the num of rows :";
    cin >> n;

    for(int i=0; i<n; i++)
    {
       // first and last line
       if(i==0 || i==n-1){
        for(int i=0; i<n; i++){
            cout<<"* ";
        }
        cout<<endl;
    }
    else{
        cout<<"* ";
        for(int sp=0; sp<n-2; sp++){
            cout<<"  ";
        }
        cout<<"* ";
        cout<<endl;
    }
    }

    return 0;
}