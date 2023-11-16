#include <bits/stdc++.h>
using namespace std;
int min_result(int arr[], int n)
{
    int min_sum = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            int sum = (arr[i] + arr[j] + (j + 1) - (i + 1));
            min_sum = min(min_sum, sum);
        }
    }

    return min_sum;
}

int main()
{
    int n, t;
    cin >> t >> n;
    while(t>0)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << min_result(arr, n) << endl;
        t--;
    }

    return 0;
}