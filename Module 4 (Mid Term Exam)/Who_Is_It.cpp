#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
  int id;
  string name;
  char section;
  int total_marks;
};
Student compare(Student a, Student b, Student c)
{

  if (a.total_marks > b.total_marks && a.total_marks > c.total_marks)
  {
    return a;
  }
  else if (b.total_marks > a.total_marks && b.total_marks > c.total_marks)
  {
    return b;
  }
  else if (c.total_marks > b.total_marks && c.total_marks > a.total_marks)
  {
    return c;
  }

  return (a.total_marks == b.total_marks) ? a : (b.total_marks == c.total_marks) ? b: (c.total_marks == a.total_marks)   ? a : c;
}

int main()
{
  int testcase;
  cin >> testcase;

  while (testcase > 0)
  {
    Student a;
    Student b;
    Student c;
    cin >> a.id >> a.name >> a.section >> a.total_marks;
    cin >> b.id >> b.name >> b.section >> b.total_marks;
    cin >> c.id >> c.name >> c.section >> c.total_marks;

    Student topper = compare(a, b, c);
    cout << topper.id << " " << topper.name << " " << topper.section << " " << topper.total_marks << endl;
    --testcase;
  }

  return 0;
}