#include <iostream>
#include <string>
#include <cstring>
#include <cctype>  

using namespace std;

int main()
{
    string str = "A man, a plan, a canal: Panama";
    int i = 0;
    int j = str.length() - 1;

    while (i < j)
    {
        if (!isalpha(str[i]))
        {
            i++;
            continue;
        }
        if (!isalpha(str[j]))
        {
            j--;
            continue;
        }
        if (isspace(str[i]))
        {
            i++;
            continue;
        }
        if (isspace(str[j]))
        {
            j--;
            continue;
        }
        
        char ch = tolower(str[i]);
        str[i] = tolower(str[j]);;
        str[j]=ch;

        i++;
        j--;
    }

    cout<<str;
}