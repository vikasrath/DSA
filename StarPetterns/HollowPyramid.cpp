#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter the num of rows :";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // first
        if (i == 0)
        {
            for (int sp = 0; sp < n - 1; sp++)
            {
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }
        else if (i == n - 1)
        {
            for (int str = 0; str < n; str++)
            {
                cout << "* ";
            }
        }
        else
        {
            // space
            for (int sp1 = 0; sp1 < n - i - 1; sp1++)
            {
                cout << " ";
            }
            cout << "*";

            // space
            for (int sp = 0; sp < 2 * i - 1; sp++)
            {
                cout << " ";
            }
            cout << "*"<<endl;
            
        }
    }

    return 0;
}