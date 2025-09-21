#include <iostream>
using namespace std;

int main()
{
    
    int arr[]={1,2,3,4,34,56,76,95,98};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int lrg=arr[0];

    for(int i=1; i<n; i++){
        if(lrg<arr[i]){
            lrg= arr[i];
        }
    }
    
    cout<<"Largest Number is : "<<lrg<<endl;

    int sclrg=arr[0];

    for(int i=1; i<n; i++){
        if(sclrg<arr[i] && arr[i] != lrg){
            sclrg= arr[i];
        }
    }

    cout<<"Second Largest Number is : "<<sclrg;


    

    return 0;
}