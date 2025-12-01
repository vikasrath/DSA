#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main()
{

    // multimap by default is sorted by keys
    // mutlimap allow to store multiple key with same name
    
    multimap<string, int> mp;

    mp.insert({"camera", 100});
    mp.emplace("tv", 200);
    mp.insert({"headphone", 70});
    mp.insert({"camera", 100});
    mp.emplace("tv", 200);
    mp.insert({"headphone", 70});
    mp.insert({"apple",300});
    mp.emplace("boat",900);

    mp.erase("tv"); // this will remove all entries with key "tv"
    mp.erase(mp.find("headphone")); // this will remove the first entry with key "headphone"

    for (auto itr : mp)
    {
        cout << "Item name : " << itr.first << endl;
        cout << "Item price : " << itr.second << endl;
    }
    
    
    
    

    return 0;
}
