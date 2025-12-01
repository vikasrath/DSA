#include<iostream>
#include<stack>
using namespace std;

int main(){
   // Prefix to Postfix conversions 

    stack<string> st;
    string str = "953+4*6/-";
    int n=str.length();

    for(int i=0; i<n; i++){
        string ch = string(1,str[i]);
        
        if(ch>="0" && ch<="9") st.push(ch);
        else{
            string x="(";
            string  val2= st.top(); st.pop();
            string  val1= st.top(); st.pop();
            st.push(x+val1+ch+val2+")");
            x="";
        }
    }

    cout<<"ans : "<< st.top();

    return 0;
}