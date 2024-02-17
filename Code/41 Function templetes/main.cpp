#include <iostream>
using namespace std;
// function template = describes what a function looks like, can be used to generate as many overloaded functions as needed, each using different data types
template <typename T> //crea una funzione generica che viene applicata su diversi tipi di dati
T max(T x, T y){
    return (x > y) ? x : y;
}

int main()
{
    cout <<std:: max(1, 2) << '\n';
    cout <<std::max(1.1, 2.2) << '\n';
    cout <<std::max('1', '2') << '\n';
 
    return 0;
}