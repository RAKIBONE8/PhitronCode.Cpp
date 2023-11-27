#include <bits/stdc++.h>
using namespace std;
void ReplaceWord(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'E')
        {
            if (s.substr(i, 5) == "EGYPT")
            {
                s.replace(i, 5, " ");
            }
        }
    }
    cout << s << endl;
}

int main()
{
    string s;
    getline(cin, s);

    ReplaceWord(s);
    return 0;
}

