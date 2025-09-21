#include <iostream>
using namespace std;

int main()
{

    int n,target;

    cout<<"Enter the size of array : ";
    cin>> n;
    
    int arr[n];

    for(int i=0; i<n; i++){
        cout<< i+1 <<". Enter Number : ";
        cin>>arr[i];
    }
    
    cout << "Enter a target number : ";
    cin >> target;

    for (int i = 0; i < n; i++){
       if(target==arr[i]){
        cout<<"The Target Number is : "<<arr[i];
        break;
       }
    }
    

    return 0;
}