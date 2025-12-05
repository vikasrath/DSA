#include<iostream>
using namespace std;


void reverse(string str,int size,string rev){

    if(size<0){
        
        return;
    }  
    rev+=str[size];
    reverse(str,size-1,rev);
    
    
}
int main(){




    reverse("abcd",3,"");

    return 0;
}