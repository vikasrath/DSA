#include <iostream>
using namespace std;

int main()
{
    // time complexity in worst case -> big o f n^2
    // time comlexity in best case -> big o f n

    int arr[] = {1, 3, 4, 5, 2, 5,-9};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {

        int min = arr[i];
        int minIndex = -1;

        for (int j = i; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = min;
        arr[minIndex] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}