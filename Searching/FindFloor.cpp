#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,4,5,7,9,11,15,17,19,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 21;
    int idx = -1;
    int low = 0;
    int high= n-1;
    bool found = false;
    
    while (low<=high)
    {   
        int mid = (low+high)/2;
        if(arr[mid]== target){
            idx = mid;
            if(arr[mid+1]!=target){
                found = true;
                cout<<"The index of Floor of x is "<<idx;
                break;
            }else{
                low=mid+1;
            }
        }else if (arr[mid]<target)
        {
            low=mid+1;
        }else{
            high= mid-1;
        }
        
    }

    if (!found)
    {
        cout<<"The index  Floor of x is "<<low-1;
    }
    
    


    return 0;
}