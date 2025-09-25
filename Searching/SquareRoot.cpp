#include <iostream>
using namespace std;

int main(){

    int n=25;
    int low = 1;
    int high = n;
    int ans = 0;

    while (low<=high)
    {
       int mid = (low+high)/2; // we can also do it like this -> low+(high-low)/2;
        if (mid==n/mid)
        {
           ans=mid;
           break;
        }
       else if(mid>n/mid){  // we can also do it like this-> mid>n/mid
        high = mid-1;
       }else{
        ans= mid;
        low=mid+1;
       }
       
    }

    cout<<ans;
    



    return 0;
}