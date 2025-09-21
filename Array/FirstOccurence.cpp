#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int arr[]={10,20,30,40,40,40,45,50,50,55,67,76,78};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    int low=0;
    int high=n-1;
    int target=40;
    int counter=0;
    
    while(low<=high){
        counter++;
        int mid=(low+high)/2;


        if(arr[mid]==target){
            if(mid>0 && arr[mid+1]!= target ){
                cout<<"Number Present at last " << mid+1<<" Place"<<endl;
                break;
            }else{
                low=mid+1;
            }
        }
        else if(arr[mid]<target){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }

    low=0;
    high=n-1;
     while(low<=high){
        counter++;
        int mid=(low+high)/2;


        if(arr[mid]==target){
            if(mid>0 && arr[mid-1]!= target ){
                cout<<"Number Present at first " << mid+1<<" Place"<<endl;
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

    cout<<"Counter "<<counter;
    
    return 0;
}