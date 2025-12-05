#include <iostream>
#include <vector>
using namespace std;

int Power(int n)
  {   
    int power=1;
    for(int i=1;i<=n; i++){
        power*=2;
    }
    return power;
   }
int main()
{
    int ans = Power(5);
    cout << ans;
    return 0;
}