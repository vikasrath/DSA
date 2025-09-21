#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int arr[]={10,20,30,40,50,78};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    for (int i = 0; i < n/2; i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }

       for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}