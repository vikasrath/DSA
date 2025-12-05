#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    vector<int> arr = {10, 6, 8, 5, 11, 9};
    int n = arr.size();
    vector<int> ngrr(n);
    stack<int> st;
    

    for (int i = n - 1; i >= 0; i--)
    {
        int ele = arr[i];
        int count = 0;

        while (!st.empty() && st.top() <= ele)
        {
            count++;
            st.pop();
        }
        if(st.size()>0) count++;
        st.push(ele);
        ngrr[i] = count;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ngrr[i] << " ";
    }

    // brute force approach
    // vector<int> arr = {1,8,3,5,2,1,6,4};
    // int n = arr.size();
    // vector<int> ngarr;
    // bool found=false;

    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i]<arr[j]){
    //             ngarr.push_back(arr[j]);
    //             found=true;
    //             break;
    //         }
    //     }
    //     if(found==false){
    //         ngarr.push_back(-1);
    //     }
    //     found=false;
    // }

    // for (int i = 0; i < ngarr.size(); i++)
    // {
    //     cout<<ngarr[i]<<" ";
    // }
    return 0;
}