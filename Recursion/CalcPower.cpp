#include <iostream>
#include <vector>
using namespace std;

int Power(int x, int n)
{
    if (n == 0)
        return 1;
    return x * Power(x, n - 1);
}

int main()
{
    int ans = Power(2,6);
    cout << ans;
    return 0;
}