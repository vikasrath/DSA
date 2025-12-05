#include <iostream>
#include <vector>
using namespace std;

int Fibonacci(int n)
{
    if (n == 1 || n==2) return 1;
    int ans = Fibonacci(n - 1) + Fibonacci(n + 2);
    return ans;
}

int main()
{
    int ans = Fibonacci(6);
    cout << ans;
    return 0;
}