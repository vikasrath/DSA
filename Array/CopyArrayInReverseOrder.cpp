#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // int n;
    // cout << "Enter the size of array->";
    // cin >> n;
    // vector<int> arr(n);

    int arr[5]={10,20,30,40,50};
    int n= sizeof(arr)/sizeof(arr[0]);
    int arr2[5];

    
    for (int i = 0; i < n; i++)
    {
        arr2[i]=arr[n-i-1];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<arr2[i]<<" ";
    }
    
    return 0;
}