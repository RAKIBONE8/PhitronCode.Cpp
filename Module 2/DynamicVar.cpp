#include<bits/stdc++.h>
using namespace std;

int * funcn()
{
    int *a = new int;
    cout<< a <<endl;
    *a = 18;
    return a;
}
int main()
{
    // int x = 10;
    // int *a = new int;
    // *a = 10;
    // cout<< *a <<endl;

    int *p = funcn();
    cout<< *p <<endl;
    return 0;
}