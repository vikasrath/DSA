#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    cout << "Enter the size of array->";
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". Enter no->";
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "<<endl;
    }

    cout << "Size of array before->"<<arr.size()<<endl;
    arr.push_back(10);
    cout <<"Size of array After->"<< arr.size();
    
    return 0;
}