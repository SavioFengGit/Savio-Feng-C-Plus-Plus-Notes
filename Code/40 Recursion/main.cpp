#include <iostream>
using namespace std;
// recursion = a programming technique where a function invokes itself from within, break a complex concept into a repeatable single step
// iterative vs recursive
//advantages = less code and is cleaner usefull for sorting and searching algorithms
//disadvantages = uses more memory and slower
int factorial(int num);

int main () {

    cout << factorial(10);

    return 0;
}

int factorial(int num){
    if(num > 1){
        return num * factorial(num - 1); //richiama se stessa
    }
    else{
        return 1;
    }
}