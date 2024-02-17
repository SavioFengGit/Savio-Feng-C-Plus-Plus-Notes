#include <iostream>
using namespace std;
// null value = a special value that means something has no value.
// when a pointer is holding a null value, that pointer is not pointing at anything (null pointer)
//nullptr = keyword represents a null pointer literal
//nullptrs are helpful when determining if an address
//was successfully assigned to a pointer
int main()
{
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        cout << "address was not assigned!\n";
    }
    else{
        cout << "address was assigned!\n";
        cout << *pointer;
    }

    return 0;
}