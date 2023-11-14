#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};

int main()
{
    Student a, b;
    /*
    a.roll = 18;
    a.cgpa = 9.1;
    char tmp[100] = "Rakib";
    strcpy(a.name,tmp);
    */
    // For getting a name input with spaces;
    cin.getline(a.name,100);
    cin>>a.roll>>b.cgpa;
    getchar();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.cgpa;

    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    cout << b.name << " " << b.roll << " " << b.cgpa << endl;

    return 0;
}