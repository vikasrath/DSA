#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){

int num = 41356;
vector<int> arr;

while(num>0){
    int ans = num%10;
    num = num/10;
    arr.push_back(ans);
}
 reverse(arr.begin(),arr.end());
 int rows= *max_element(arr.begin(), arr.end());
 int col = arr.size();

 for(int i=0; i<rows; i++){
    for(int j=0; j<col; j++){
        int cur=arr[j];
        if(cur>0){
            cout<<"* ";
            arr[j]--;
        }else{
            cout<<"  ";
        }
    }
    cout<<endl;
 }


    return 0;
}