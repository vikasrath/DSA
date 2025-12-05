#include <iostream>
#include <vector>
using namespace std;

int Power(int x, int n)
{   
    if(n==0) return 1;
    int a =  Power(x, n/2);
    if (n % 2 == 0) return a  * a;
    else return a * a * x;
    
}

int main()
{
    int ans = Power(2,5);
    cout << ans;
    return 0;
}