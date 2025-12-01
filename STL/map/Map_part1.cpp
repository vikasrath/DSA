#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main()
{    

 // map store all unique keys 
 // elements are by defoult sorted by key
 // map is implemented as a balanced binary search tree

     map<string, int> mp;
     mp["camera"] = 100;
     mp["tv"] = 200;
     mp["headphone"] = 70;
     mp["headphone"] = 70;
     cout << mp["camera"] << endl;
     cout << mp.at("tv") << endl;
     cout << mp.size() << endl;
     cout << mp.count("") << endl;

     auto it = mp.find("headphone");
     if (it != mp.end()) {
         cout<<"Item name : "<<it->first<<endl;
         cout<<"Item price : "<<it->second<<endl;
     } else {
         cout << "Headphone not found." << endl;
     }

     
     
     

     return 0;
}
