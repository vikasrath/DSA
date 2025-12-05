#include <iostream>
#include <vector>
using namespace std;

int StairPath(int n)
{
    if (n <= 2) return n;
    int ans = StairPath(n - 1) + StairPath(n -2) + StairPath(n -3);
    return ans;
}

int main()
{
    int ans = StairPath(6);
    cout << ans;
    return 0;
}