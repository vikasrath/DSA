#include<iostream>
#include <stack>
using namespace std;

string calculate(stack<string> &valst, stack<string> &opst){
    string b = valst.top(); valst.pop();
    string a = valst.top(); valst.pop();
    string op = opst.top(); opst.pop();
    string x = "";
    return x = x+a+b+op;
}

int main(){
        string str ="9-(5+3)*4/6";
        
        stack<string> valst;
        stack<string> opst;

        for(int i=0; i< str.length(); i++){
            string ch=string(1, str[i]);
            
            if(ch>="0" && ch<="9") valst.push(ch);
            else if(opst.empty() || ch=="(" || opst.top()=="(") opst.push(ch);
            else if(ch==")"){
                while(opst.top()!="(")
                {
                    string ans = calculate(valst,opst);
                    valst.push(ans);
                }
                opst.pop();
            }
            else{
                if(ch=="+" || ch=="-"){
                    // work
                    string ans = calculate(valst,opst);
                    valst.push(ans);
                    opst.push(ch);
                
                }
                if(ch=="*" || ch=="/"){
                    if(opst.top()=="*" || opst.top()=="/"){
                        string ans = calculate(valst,opst);
                        valst.push(ans);
                        opst.push(ch);
                    }else{
                        opst.push(ch);
                    }
                }
            }
        }
        while(valst.size()>1){
          string ans = calculate(valst,opst);
          valst.push(ans);
        }
        
        cout<<"Ans is : "<<valst.top();


    return 0;
}