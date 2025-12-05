#include <iostream>
using namespace std;

int main(){

    // find element that appears only once in a sorted array where every other element appears twice
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
    if(arr[n-1]!=arr[n-2]){
        cout<<"Ans : "<<arr[n];
    }
    
    while (low<=high)
    {   
        int mid = (low+high)/2;
        if (arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1])
        {
           cout<<"Ans : "<<arr[mid]<<endl;
        }

        int first=mid,second=mid;
        if(arr[mid]==arr[mid-1]){
            first=mid-1;
        }else{
            second =mid+1;
        }

        if((first-low)%2==0){
            low=second+1;
        }else{
            high= first-1;
        }
        
        
        
    }
    return 0;
}