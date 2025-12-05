#include<iostream>
using namespace std;


string SayAndCount(int n){

    if(n==1)return "1";
    string s = SayAndCount(n-1);

    int i=0 , j=0;
    int len = s.size();
    string ans= "";
    while (j<len)
    {
        while (j<len && s[j]==s[i]) j++;
        ans += to_string(j-1);
        ans += s[i];
        i=j;
    }
    
    return ans;
}
int main(){

    string ans = SayAndCount(4);
    cout<<ans;
    return 0;
}