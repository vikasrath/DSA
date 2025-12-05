#include<iostream>
#include<vector>
using namespace std;

int main(){
 
    vector<int> arr(5,0);
    // vector<int>::iterator itr;

    for ( auto itr = arr.begin(); itr!=arr.end(); itr++)
    {
        cout<<*(itr);
    }
    

    return 0;
}
