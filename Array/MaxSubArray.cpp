#include<iostream>
#include<vector>
using namespace std;

int main(){

    // brute force approach to find maximum subarray sum..........

    // vector<int> arr = {1,2,3,4,5};
    // int n = arr.size();
    
    // int mxsum = INT32_MIN;
    // for (int st = 0; st < n; st++)
    // {   
    //     int sum =0;
    //     for (int end = st; end <n ; end++)
    //     {   
    //         sum+=arr[end];
    //     }
    //     cout<<endl;
    //     mxsum = max(mxsum,sum);_QUERY_MSVC_PRINTF_QUIRKS
    // }
    
    // cout<<"Maximum Subarray Sum is: "<<mxsum<<endl;

    // optimal approach to find maximum subarray sum....Kadane's Algorithm.......
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    int n = arr.size();
    int cursum =0;
    int mxsum = INT32_MIN;

    for (int i = 0; i < n; i++)
    {
        cursum=max(arr[i],cursum+arr[i]);
        if(mxsum<cursum){
            mxsum=cursum;
        }

    }
    
    



    return 0;

}