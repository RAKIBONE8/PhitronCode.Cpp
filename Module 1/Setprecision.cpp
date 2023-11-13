#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double a;
    cin>> a;
    
    // printf("%0.2llf",a);
    cout<<fixed<<setprecision(3)<<a<<endl; // setprecision to get the value after point;
    return 0;
}