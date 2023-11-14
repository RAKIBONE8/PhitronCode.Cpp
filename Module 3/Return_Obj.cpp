#include<bits/stdc++.h>
using namespace std;
class Student
{
   public:
   int roll;
   int cls;
   double gpa;

   Student(int r,int c,double g)
   {
      roll = r;
      cls = c;
      gpa = g;
   }
};
Student* fun()
{
    Student rahim(32,10,4.99);
    Student *p = &rahim;
    return p;
}

int main()
{
    Student* result = fun();
    cout<< result->roll<<" "<<result->cls<<" "<<result->gpa<<endl;
    return 0;
}

// here is a issue. Because in this case in the function the object is created statically. So after returning the pointer the values are erased.So now need to create the object Dynamically
// Resolving this in the next file;
// Without using pointer you can access easily;