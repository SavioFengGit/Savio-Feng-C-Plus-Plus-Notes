#include <iostream>
using namespace std;
void swap(string &x, string &y); //dichiarazione della funzione swap, che prende due parametri di tipo stringa per riferimento e non restituisce nulla
//passaggio per valore = gli dai una copia e quindi non modifichi la variabile originale
//passaggio per riferimento = modifichi la variabile originale

int main()
{
	string x = "Kool-Aid";
	string y = "Water";

	swap(x, y);//chiamo la funzione swap e passo le variabili x e y come argomenti. La funzione scambia il valore di x e y

	cout << "X: " << x << '\n';
	cout << "Y: " << y << '\n';

    return 0;
}

void swap(string &x, string &y){ //definizione della funzione swap, passo per riferimento in modo tale da modificare i valori
	string temp;
	temp = x;
	x = y;
	y = temp;
}
//Il passaggio per riferimento da definitivo nella definizione, quando lo richiami non serve inserire &

//Nella definizione della funzione swap, il simbolo & indica che i parametri x e y sono passati per riferimento. 
//Questo significa che la funzione non riceve una copia dei valori delle variabili, ma un alias che si riferisce alle stesse variabili.
//In questo modo, la funzione può modificare il valore delle variabili originali, scambiandole tra loro. Se non si usasse il simbolo &
//i parametri sarebbero passati per valore, e la funzione opererebbe su delle copie locali, senza influire sulle variabili esterne.

//Passare i parametri per riferimento ha alcuni vantaggi, come evitare la duplicazione di dati e migliorare le prestazioni. 
//Tuttavia, bisogna fare attenzione a non passare dei riferimenti nulli o invalidi, che potrebbero causare errori. 
//Inoltre, se non si vuole che la funzione modifichi i parametri, si può usare il qualificatore const, che rende i riferimenti 
//immutabili