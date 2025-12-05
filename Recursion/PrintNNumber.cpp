#include<iostream>
using namespace std;


void print(int st, int n){
    if(st>n) return;
    cout<<st<<endl;
    print(st++,n);
    
} 

int main(){
    
    print(1,5);
    return 0;
}