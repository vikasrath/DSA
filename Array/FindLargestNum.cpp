#include <iostream>
using namespace std;

int main()
{
    
    int arr[]={1,2,3,4,34,56,76,90,98};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int lrg=arr[0];

    for(int i=1; i<n; i++){
        if(lrg<arr[i]){
            lrg= arr[i];
        }
    }
    
    cout<<"Largest Number is : "<<lrg;

    // for (int i = 0; i < n; i++){
    //    if(target==arr[i]){
    //     cout<<"The Target Number is : "<<arr[i];
    //     break;
    //    }
    // }
    

    return 0;
}