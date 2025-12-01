#include<iostream>
#include <vector>
using namespace std;

int countPrimes(int n) {
        
        vector<int> arr(n+1,true);
        int count=0;
        for(int i=2; i<n; i++){
            if(arr[i]){
                count++;
                for(int j=i*2; j<n; j=j+i)
                 arr[j]=false;
            }
        }
        
        return count;

    }
int main(){

    int ans =countPrimes(50);
    cout<<"ans : "<<ans;
    
    return 0;
}