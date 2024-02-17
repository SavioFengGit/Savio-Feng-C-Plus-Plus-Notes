#include<iostream>
using namespace std;
int main()
{
    // type conversion = conversion a value of one data type to another
    //                 Implicit = automatic
    //                 Explicit = precede value with new data type (int)

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100; // fa il casting di questions in double 

    cout << score << "%";

    return 0;
}