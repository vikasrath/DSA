#include<iostream>
using namespace std;

int main(){

    int n=12;
    bool isPrime=true;
    
    for(int i=2; i<n; i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if (isPrime==true)
    {
        cout<<"Number is prime ";
    }else{
         cout<<"Number is Not prime ";
    }
    
    return 0;
}