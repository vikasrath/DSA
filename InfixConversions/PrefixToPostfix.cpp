#include<iostream>
#include<stack>
using namespace std;

int main(){
   // Prefix to Postfix conversions 

    stack<string> st;
    string str = "-9/*+5346";
    int n=str.length();

    for(int i=n-1; i>=0; i--){
        string ch = string(1,str[i]);
        
        if(ch>="0" && ch<="9") st.push(ch);
        else{
            string x="";
            string  val1= st.top(); st.pop();
            string  val2= st.top(); st.pop();
            st.push(x+val1+val2+ch);
            x="";
        }
    }

    cout<<"ans : "<< st.top();

    return 0;
}