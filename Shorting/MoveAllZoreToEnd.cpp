  #include <iostream>
using namespace std;

int main()
{
   // time complexity in worst case -> big o f n^2
   // time comlexity in best case -> big o f n


    int arr[] = {1, 0, 4, 0, 2, 5, 6, 0, 2, 0, 5, 45};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        bool isShorted = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] ==0){
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isShorted = false;
                
            }
        }

        if(isShorted==true) break;
    }

    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] <<" ";
    }
    

    return 0;
}