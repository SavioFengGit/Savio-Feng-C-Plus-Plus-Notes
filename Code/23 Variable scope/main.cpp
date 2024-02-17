#include <iostream>
using namespace std;

int myNum = 3; //global

void printNum();

int main()
{
    int myNum = 1; //local
    printNum();
    cout << "main: " << myNum << '\n'; //local
    //cout << ::myNum << '\n'; //global

    return 0;
}
void printNum(){
    int myNum = 2; //local
    cout << "printNum: "<< myNum << '\n'; //local
    //cout << ::myNum << '\n'; //global
}
