#include <bits/stdc++.h>
using namespace std;
void LotteryLagGayiKya(string s)
{
    int mid = s.length() / 2;
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < mid; i++)
    {
        sum1 += (s[i] - '0');
    }
    for (int i = mid ; i < s.length(); i++)
    {
        sum2 += (s[i] - '0');
    }

    if (sum1 == sum2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int testCase;
    cin >> testCase;
    cin.ignore();
    while (testCase > 0)
    {
        string s;
        getline(cin, s);

        LotteryLagGayiKya(s);
        testCase--;
    }
    return 0;
}