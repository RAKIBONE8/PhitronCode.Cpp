#include <bits/stdc++.h>
using namespace std;

void revPrint(stringstream &ss)
{
    string word;

    if (ss >> word)
    {
        revPrint(ss);
        cout << word;
    }
}

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);

    revPrint(ss);
    return 0;
}