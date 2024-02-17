#include <iostream>
//namespace = provides a solution for preventing name conflicts in a large projects. Each entity needs a unique name.
//a namespace allows for identically named entities as long as the namespaces are different.
using namespace std;
namespace first{ //è come se fosse una macro
    int x = 1;
}
namespace second{
    int x = 2;
}


int main() {

    int x = 0;

    cout << x <<"\n";
    cout << first::x<<"\n";
    cout << second::x<<"\n";

    return 0;
}