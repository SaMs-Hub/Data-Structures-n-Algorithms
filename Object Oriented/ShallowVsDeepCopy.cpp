#include <bits/stdc++.h>
using namespace std;

class Student
{
    int age;

public:
    char *name;

public:
    Student(int age, char *name)
    {
        this->age = age;
        // shallow copy
        //this->name = name;


        // deep Copy
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    Student(Student const &s){
        this->age = s.age;
        this->name = new char[strlen(s.name) + 1];
        strcpy(this->name, s.name);
    }

    void display()
    {
        cout << this->age << " " << this->name;
    }
};

int main()
{
    char name[] = "sam";
    Student s1(20, name);

    Student s2(s1);
    s2.name[0] = 'n';
    s2.display();
    s1.display();
}
