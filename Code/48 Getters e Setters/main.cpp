#include <iostream>
using namespace std;
// abstraction = hiding unnecessary data from outside a class
//getter = function that makes a private attribute readable
//setter = function that makes a private attribute writeable
class Stove{
    private:
        int temperature = 0;
    public:

    int getTemperature(){
        return temperature;
    }
    void setTemperature(int temperature){
        if(temperature < 0){
            this->temperature = 0;
        }
        else if(temperature >= 10){
            this->temperature = 10;
        }
        else{
            this->temperature = temperature;
        }
    }
};

int main() {

    Stove stove;

    stove.setTemperature(5);

    cout << "The temperature setting is: " << stove.getTemperature();

    return 0;
}