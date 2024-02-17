#include<iostream>
using namespace std;

int main()
{
    string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    string temp;

    for(int i = 0; i < size; i++){
        cout << "Enter in food you like or 'q' to quit #" << i + 1 << ": ";
        getline(cin, temp); //inserimento dei cibi
        if(temp == "q"){
            break;
        }
        else{
            foods[i] = temp;
        }
    }

    cout << "You like the following food:\n";

    for(int i = 0; !foods[i].empty(); i++){ //visualizzazione di foods
        cout << foods[i] << '\n';
    }

    return 0;
}