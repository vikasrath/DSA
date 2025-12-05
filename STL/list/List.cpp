#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{

    list<int> ls; //empty list
    // list<int> ls(5, 10);  // 5 elements, each with value 10
    // list<int> ls = {1, 2, 3, 4} //initialize with values
    

    ls.push_back(3);
    ls.push_back(5);
    ls.pop_back();
    

        return 0;
}
