#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int arr[]={10,20,30,40,45,50,50,55,67,76,78};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    int low=0;
    int high=n-1;
    int target=67;
    int counter=0;
    
    while(low<=high){
        counter++;
        int mid=(low+high)/2;


        if(arr[mid]==target){
            cout<<"Number Present at " << mid+1<<" Place"<<endl;
            break;
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