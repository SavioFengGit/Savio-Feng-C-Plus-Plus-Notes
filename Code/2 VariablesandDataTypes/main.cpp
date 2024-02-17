#include <iostream> 
using namespace std;


int main(){
    
    int x; //dichiarazione di un integer
    x = 20; //assegnazione

    cout<< "The first variable is " << x << endl;

    int y = 10; // dichiarazione e assegnazione nella stessa line

    cout<< "The second variable is " << y << endl;

    int sum = x + y ;
    cout<< "The sum is: " << sum << endl;


    int age =21;
    int year= 2024;
    int days=7.5; 

    cout<<days<<endl;// lo tronca, perchè è un intero

    double price = 10.99;
    cout<< price <<endl;


    char carattere = 'A';
    cout<<carattere<<endl;


    bool isOnline = true;
    cout<<"Are you online? 1:yes, 0:false:" << isOnline<<endl;

    //objects that rapresents a sequence of text
    string name = "Savio Feng";
    cout<<"The boss is "<<name;

    return 0;
}