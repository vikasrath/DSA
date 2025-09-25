#include <iostream>
using namespace std;

int main()
{
    // time complexity in worst case -> big o f n^2
    // time comlexity in best case -> big o f n

    int arr[] = {1, 3, 4, -2, 0, 5, 2, 5, -9};
    int n = sizeof(arr) / sizeof(arr[0]);

    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = i-1; j >= 0; j--)
    //     {
    //         if (arr[j + 1] < arr[j])
    //         {
    //             int temp = arr[j+1];
    //             arr[j+1] = arr[j];
    //             arr[j] = temp;
    //         }else{   // optimized
    //             break;
    //         }
    //     }
    // }

    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        while (j >= 1 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}