#include <iostream>
using namespace std;

class Pizza{
    public:
        string topping1;
        string topping2;

    Pizza(){ //costruttore 1
        
    }
    Pizza(string topping1){//costruttore 2
        this->topping1 = topping1;
    }
    Pizza(string topping1, string topping2){//costruttore 3
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main() {

    Pizza pizza1("pepperoni");
    Pizza pizza2("mushrooms", "peppers");
    Pizza pizza3;
    
    // Stampa a schermo le informazioni sulle pizze
    cout << "Pizza 1 has " << pizza1.topping1 << " as topping.\n";
    cout << "Pizza 2 has " << pizza2.topping1 << " and " << pizza2.topping2 << " as toppings.\n";
    cout << "Pizza 3 has no toppings.\n";
    
    return 0;
}