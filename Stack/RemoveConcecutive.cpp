#include<iostream>
#include<stack>
using namespace std;

int main(){

  string str="aaabbbcccddeeeffgghh";
  stack<char> st;
  stack<char> st2;

  for(int i=0; i<str.length(); i++){
      char ch = str[i];
      if(st.empty()) st.push(ch);
      if(st.top()!=ch) st.push(ch);
  }

  while (!st.empty())
  {
    st2.push(st.top());
    st.pop();
  }

while (!st2.empty())
  {
    cout<<st2.top()<<" ";
    st2.pop();
  }

    return 0;
}