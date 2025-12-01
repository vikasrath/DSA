#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int> valst;
    string str = "953+4*6/-";

    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        int ascii = (int)ch;
        if(ascii >= 48 && ascii<=57) valst.push(ascii-48);
        else{
            int val2= valst.top(); valst.pop();
            int val1= valst.top(); valst.pop();
            if(ch=='+') valst.push(val1+val2);
            else if(ch=='-') valst.push(val1-val2);
            else if(ch=='*') valst.push(val1*val2);
            else if(ch=='/') valst.push(val1/val2);
        }
    }

    cout<<"ans : "<< valst.top();

    return 0;
}