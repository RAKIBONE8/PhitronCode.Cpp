#include <bits/stdc++.h>
using namespace std;
bool palindrome(int *arr, int n)
{

    int *l = arr;
    int *r = arr + (n - 1);

    bool flag = true;
    for (int i = 0; i < n / 2; i++)
    {
        if (*l == *r)
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
        l++;
        r--;
    }
    return flag;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (palindrome(arr, n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}