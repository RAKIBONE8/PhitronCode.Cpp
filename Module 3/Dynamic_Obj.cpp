#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};
Student *fun()
{
    Student *rakib = new Student(32, 10, 4.99); // Dynamically allocated;
    return rakib;
}

int main()
{
    Student *result = fun();
    cout << result->roll << " " << result->cls << " " << result->gpa << endl;
    delete result;
    return 0;
}
