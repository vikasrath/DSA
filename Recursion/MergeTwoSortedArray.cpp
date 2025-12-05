#include <iostream>
#include <vector>
using namespace std;


int main()
{   
    int arr1[]={10,20,30,40,50,60};
    int arr2[]={11,12,23,24,26,45,89};
    int arr3[13];

    int arr1len = sizeof(arr1)/sizeof(arr1[0]);
    int arr2len = sizeof(arr2)/sizeof(arr2[0]);
    int i=0,j=0,k=0;

    while (i<arr1len || j<arr2len)
    {
        if(arr1[i]<=arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }

    int arr3len = sizeof(arr3)/sizeof(arr3[0]);
    for (int i = 0; i < arr3len; i++)
    {
        cout<<arr3[i]<<" ";
    }
    
    
    
    
    return 0;
}