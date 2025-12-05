#include <iostream>
#include <vector>
using namespace std;

int CountDigit(int n)
{
    if (n == 0) return 0;
    return 1 + CountDigit(n / 10);

}

int main()
{
    int ans = CountDigit(789);
    cout << ans << endl;
    return 0;
}