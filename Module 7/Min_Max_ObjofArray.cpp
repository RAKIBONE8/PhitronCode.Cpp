#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
    }
    Student minimum ;
    minimum.marks = INT_MAX;
    Student max = INT_MAX;
    max.marks = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i].marks>max.marks)
        {
            max = a[i];
        }
    }
    
    // cout<<minimum.name<<" "<<minimum.roll<<" "<<minimum.marks<<endl;
    cout << max.name << " " << max.roll << " " << max.marks << endl;
    return 0;
}