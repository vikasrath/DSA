#include<iostream>
#include <stack>
using namespace std;

int calculate(stack<int> &valst, stack<char> &opst){
    int b = valst.top();
    valst.pop();
    int a = valst.top();
    valst.pop();
    char op = opst.top();
    opst.pop();
    if(op=='+') return a+b;
    else if (op == '-') return a-b;
    else if (op == '*') return a*b;
    else if (op == '/') return a/b;
}

int main(){
        string str ="9-(5+3)*4/6";

        stack<int> valst;
        stack<char> opst;

        for(int i=0; i< str.length(); i++){
            char ch=str[i];
            int ascii = (int)ch; // "0"-> 48 and "9"->57
            if(ascii >=48 && ascii<=57) valst.push(ascii-48);
            else if(opst.empty() || ch=='(' || opst.top()=='(') opst.push(ch);
            else if(ch==')'){
                while(opst.top()!='(')
                {
                    int ans = calculate(valst,opst);
                    valst.push(ans);
                }
                opst.pop();
            }
            else{
                if(ch=='+' || ch=='-'){
                    // work
                    int ans = calculate(valst,opst);
                    valst.push(ans);
                    opst.push(ch);
                
                }
                if(ch=='*' || ch=='/'){
                    if(opst.top()=='*' || opst.top()=='/'){
                        int ans = calculate(valst,opst);
                        valst.push(ans);
                        opst.push(ch);
                    }else{
                        opst.push(ch);
                    }
                }
            }
        }
        while(valst.size()>1){
          int ans = calculate(valst,opst);
          valst.push(ans);
        }
        
        cout<<"Ans is : "<<valst.top();


    return 0;
}