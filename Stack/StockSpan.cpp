#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){

    vector<int> arr = {100,80,90,70,60,75,85};
    int n=arr.size();
    stack<pair<int,int>> st;
    vector<int> ansarr(n);

    ansarr[0]=1;
    st.push({100,0});

    for(int i=1; i<n; i++){
        int idx = i;
        int elm = arr[i];

        while (!st.empty() && st.top().first < elm){
            st.pop();
        }
        if(st.empty()) {
            ansarr[i]=1;
            st.push({elm,idx});
        }else{
            int topidx = st.top().second;
            ansarr[i]=idx-topidx;
            st.push({elm,idx});
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<ansarr[i]<<" ";
    }
    


    



    return 0;
}