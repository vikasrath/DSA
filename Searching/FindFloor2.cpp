#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 4, 5, 7, 9, 11, 15, 17, 19, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 21;

    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int idx = -1;
        int mid = (low + high) / 2;

        if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            idx = mid;
            low = mid + 1;
        }
    }

    return 0;
}