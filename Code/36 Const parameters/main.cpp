#include <iostream>
using namespace std;
void printInfo(const string &name, const int &age);
int main()
{
    // const parameter = parameter that is effectively read-only
    //                                  conveys intent & code is more secure
    //                                  useful for pointers and references
 
    string name = "Bro";
    int age = 21;
 
    printInfo(name, age);
 
    return 0;
}
void printInfo(const string &name, const int &age){
    //name = "";
    //age = 0;
    cout << name << '\n';
    cout << age << '\n';
}