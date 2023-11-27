#include <bits/stdc++.h>
using namespace std;
void ICPCballons(string s, int n)
{
    int arr[26] = {0};
    int ballon = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[s[i] - 'A'] == 0)
        {
            ballon += 2;
            arr[s[i] - 'A'] = 1;
        }
        else
        {
            ballon++;
        }
    }
    cout << ballon << endl;
    
}

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase > 0)
    {
        string s;
        int n;
        cin >> n;

        cin >> s;

        ICPCballons(s, n);
        testCase--;
    }

    return 0;
}
