#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
     pair<int,int> pr={1,2};  // pairing
     pair<int,pair<string,int>> p3={20,{"vikas",20}}; // nested pairing

     cout<<pr.first<<endl;
     cout<<pr.second<<endl;
     cout<<p3.first<<endl;
     cout<<p3.second.first<<endl;
    
     return 0;
}
