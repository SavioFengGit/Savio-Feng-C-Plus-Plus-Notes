#include <iostream>
using namespace std;

int main()
{

    string name;
    cout << "Enter your name: ";
    getline(cin, name); //esegue il cin sulla variabile name

      if(name.length()>12) //lunghezza del nome
      {
        cout << "your name can't be over 12 characters";
      }
      else {
        cout << "Welcome " << name;
      }
/*
    if(name.empty()){ //se è vuoto ritorna true
        cout<<"You didn't enter your name";
    }
    else{
        cout<<"Hello";
    }
*/
    name.clear(); //pulisce la variabile
    name.append("@gmail.com");//appende questa parte alla variabile
    name.at(0); //prende solo il primo carattere
    name.insert(0,"@"); //inserisce nella prima posizione la @  
    name.find(' '); //cerca gli spazi vuoti, restituisce un numero
    name.erase(0,3); //elimina i primi tre caratteri
}