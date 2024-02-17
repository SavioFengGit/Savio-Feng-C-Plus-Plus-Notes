#include <iostream>
using namespace std;

int main() {

    // memory address = a location in memory where data is stored
    // a memory address can accessed with & (address-of operator)

    string name = "Bro";
    int age  = 21;
    bool student = true;

    cout << &name << '\n'; //ritorna la cella di memoria
    cout << &age << '\n';
    cout << &student << '\n';

    return 0;
}