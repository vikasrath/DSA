#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,1,2,2,4,4,5,5,7,7,9,11,11,15,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int low = 0;
    int high= n-1;

  
    if(n==1){
        cout<<"Ans : "<<arr[0];
    }
    if(arr[0]!=arr[1]){
        cout<<"Ans : "<<arr[0];
    }
    if(arr[n]!=arr[n-1]){
        cout<<"Ans : "<<arr[n];
    }
    
    while (low<=high)
    {   
        int mid = (low+high)/2;
        if (arr[mid]!=arr[mid+1] || arr[mid]!=arr[mid-1])
        {
           cout<<"Ans : "<<mid;
        }else if (((mid-1)-low )%2==0)
        {
            low=mid+1;
        }else{
            high=mid-1;
        }
        
        
        
    }
    return 0;
}