#include <bits/stdc++.h>
using namespace std;

class Student
{
    // create static memets
    static int totalStudents;

    public:
        int age;
        int roll;

        Student()
        {
            totalStudents += 1;
        }

        static void getTotalStudents()
        {
            cout << totalStudents << endl;
        }
};

// initialize static members
int Student ::totalStudents = 0;

int main()
{
    Student s1;
    Student *s2 = new Student();

    Student s3, s4, s5;

    Student::getTotalStudents();
    return 0;
}
