#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int arr[]={10,20,30,40,40,40,45,50,50,55,67,76,78};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    int low=0;
    int high=n-1;
    int target=25;
    bool found = false;
    
    while(low<=high){
        
        int mid=(low+high)/2;


        if(arr[mid]==target){
            if(mid>0 && arr[mid-1]!= target ){
                cout<<"Lower Bound " << mid<<endl;
                found=true;
                break;
            }else{
                high=mid-1;
            }
        }
        else if(arr[mid]<target){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    
    if(!found) cout<<"Lower Bound "<< low<<endl;
  
    
    return 0;
}