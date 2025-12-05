#include <iostream>
#include <vector>
using namespace std;

// int SumOfDigit(int n)
// {
//     if (n >0 && n<10) return n;
//     int lg= n%10;
//     int ans = (lg*10)+lg+ SumOfDigit(n/10) ;
//     return ans;
// }

int main()
{
    // int ans = SumOfDigit(12345);
    // cout << ans;

    int n=12345;
    int rev=0;

    while (n>0)
    {
        int x = n%10;
        rev= rev*10 + x;
        n =  n/10;
    }

    cout<<rev;
    
    return 0;
}