#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){

    vector<int> arr = {1,8,9,5,7,1,6,4};
    int n=arr.size();
    vector<int> scarr(n);
    stack<int> st;

    for (int i = n-1; i >=0; i--){
       st.push(arr[i]);
    }

    for (int i = arr.size()-1; i >=0; i--){
        int cur = arr[i];
        
        while (!st.empty() && st.top()<=cur){
           st.pop();
        }
        
        if(st.empty()){
            st.push(cur);
            scarr[i]=-1;
        }else{
            scarr[i]=st.top();
            st.push(cur);
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<scarr[i]<<" ";
    }
    


    



    return 0;
}