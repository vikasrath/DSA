#include<iostream>
#include <vector>
using namespace std;

int main(){

  vector<int> arr={7,6,5,4,3,2,1,0};
   int n = arr.size();

   int i=0;
   while (i<n){
    if (arr[i]==i) i++;
    else{
        int idx = arr[i];
        if(arr[idx]==arr[i]){
            return arr[idx];
        }
        swap(arr[idx],arr[i]);
    }
   }
   


    return 0;
}