#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int arr[] = {0, 1, 2, 4, 5, 6,6, 8, 9, 223,4, 0};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    int low=0;
    int high=n-1;
    
    while(low<=high){
        
        int mid=(low+high)/2;

        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            cout<<"Peak Element at " << mid<<" Position"<<endl;
            break;
        }
        else if(arr[mid]<=arr[mid+1]){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }

    
    return 0;
}