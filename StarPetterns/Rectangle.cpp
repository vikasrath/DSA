#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter the num of rows :";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        for(int str=0; str<n; str++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}