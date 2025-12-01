#include <iostream>
#include <vector>
#include <list>
#include <map>
#include<set>
#include<unordered_map>
using namespace std;

int main()
{

    // set remove all the duplicate values
    multiset<int> st;

    st.insert({100});
    st.emplace(200);
    st.insert({70});
    st.insert({100});
  
    for (auto value : st)  // print values
    {
        cout<<value<<""<<endl;
    }   
    // auto itr= st.find(250); // find value in multiset
    // if(itr!=st.end()){
    //     cout<<"Found"<<endl;
    // }
    // else{
    //     cout<<"Not Found"<<endl;
    // }
    
    st.erase(70);    //  erase value from multiset

    st.upper_bound(100);// it return the next higher value than 100
    st.lower_bound(100);  // it return the equal value or next higher value than 100      
    

    return 0;
}
