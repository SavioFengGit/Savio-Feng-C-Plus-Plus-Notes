#include <iostream>
using namespace std;
//struct a structure that group related variables under one name, structs can contain many different data types (string, double, bool, int),
// variables in a struct are known as members, members can be access with . "Class Member Access Operation"

struct student{
    string name;
    double gpa;
    bool enrolled = true;
};
int main()
{
    student student1;
    student1.name = "Spongebob";
    student1.gpa = 3.2;

    student student2;
    student2.name = "Patrick";
    student2.gpa = 2.1;

    student student3;
    student3.name = "Squidward";
    student3.gpa = 1.5;

    cout << student1.name << '\n';
    cout << student1.gpa << '\n';
    cout << student1.enrolled << '\n';

    cout << student2.name << '\n';
    cout << student2.gpa << '\n';
    cout << student2.enrolled << '\n';

    cout << student3.name << '\n';
    cout << student3.gpa << '\n';
    cout << student3.enrolled << '\n';

    return 0;
}