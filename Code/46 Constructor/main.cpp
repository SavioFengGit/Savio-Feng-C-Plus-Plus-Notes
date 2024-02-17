#include <iostream>
using namespace std;

class Car{
    public:
        string make;
        string model;
        int year;
        string color;

    Car(string make, string model, int year, string color){
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};

int main() {

    //constructor =  special method that is automatically called when an object is instantiated
	//                      useful for assigning values to attributes as arguments

    Car car1("Chevy", "Corvette", 2022, "blue");
    Car car2("Ford", "Mustang", 2023, "red");

    cout << car1.make << '\n';
    cout << car1.model << '\n';
    cout << car1.year << '\n';
    cout << car1.color << '\n';

    return 0;
}