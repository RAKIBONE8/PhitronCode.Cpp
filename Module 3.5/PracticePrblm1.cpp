#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(string name,int roll,char section,int math_marks,int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};
Student compare(Student a,Student b,Student c)
{
    if(a.math_marks>b.math_marks)
    {
        if(a.math_marks>c.math_marks)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else if(b.math_marks>a.math_marks)
    {
        if(b.math_marks>c.math_marks)
        {
            return b;
        }
        else 
        {
            return c;
        }
    }
    else 
    {
        return c;
    }
}

int main()
{
    Student a("Rakib",06,'B',36,12);
    Student b("Virat",18,'A',100,12);
    Student c("Dhoni",07,'A',96,12);
    Student Topper = compare( a , b, c);
    cout<<Topper.name<<endl;
    return 0;
}