#include <iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
    string name = "vikas rathore";
    int i=0;
    int j=name.size()-1;

    
    while (i<=j){
    char temp = name[i];
    name[i] = name[j];
    name[j] = temp;

    i++;
    j--;
    }
   
    

    cout<<name;


    return 0;
}