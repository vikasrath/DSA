#include <iostream>
#include <vector>
using namespace std;

int fectorial(int n){
    if(n==1) return 1;
    return n* fectorial(n-1);
}

int main()
{
 int ans = fectorial(5);
 cout<<ans;    
    return 0;
}