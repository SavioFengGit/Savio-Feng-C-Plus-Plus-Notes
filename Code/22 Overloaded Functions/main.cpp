#include <iostream>
using namespace std;

void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1, string topping2);

int main()
{
    //bakePizza();
    //bakePizza("pepperoni");
    bakePizza("pepperoni", "mushroom");

    return 0;
}


//overloado la funzione bakePizza creandone altri 2, lui lo capisce in base agli argomenti che passi
void bakePizza(){
    cout << "Here is your pizza!\n";
}
void bakePizza(string topping1){
    cout << "Here is your " << topping1 << " pizza!\n";
}
void bakePizza(string topping1, string topping2){
    cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}