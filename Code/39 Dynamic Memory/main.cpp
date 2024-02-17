#include <iostream>
using namespace std;
// dynamic memory = memory that is allocated after the program is already compiled e running
// use the new operator to allocate memory in the heap rather than the stack
//usefull when we don't know how much memory we will need, makes programs more flexible, especially when accepting user input.
int main () { // Funzione principale del programma

    char *pGrades = NULL; // Dichiarazione di un puntatore a char chiamato pGrades e inizializzazione a NULL
    int size; // Dichiarazione di una variabile di tipo int chiamata size

    cout << "How many grades to enter in?: "; // Stampa a schermo del messaggio "How many grades to enter in?: "
    cin >> size; // Lettura da tastiera del valore inserito dall'utente e assegnazione alla variabile size

    pGrades = new char[size]; // Allocazione dinamica di un array di size caratteri e assegnazione del suo indirizzo al puntatore pGrades

    for(int i = 0; i < size; i++){ // Inizio di un ciclo for che si ripete size volte
        cout << "Enter grade #" << i + 1 << ": "; // Stampa a schermo del messaggio "Enter grade #" seguito dal numero del voto corrente (i + 1) e dal carattere ": "
        cin >> pGrades[i]; // Lettura da tastiera del carattere inserito dall'utente e assegnazione alla posizione i dell'array
    } // Chiusura del ciclo for

    for(int i = 0; i < size; i++){ // Inizio di un altro ciclo for che si ripete size volte
        cout << pGrades[i] << " "; // Stampa a schermo del carattere alla posizione i dell'array, seguito da uno spazio
    } // Chiusura del ciclo for

    delete[] pGrades; // Liberazione della memoria allocata dinamicamente per l'array e restituzione al sistema

    return 0; // Fine della funzione main e restituzione di 0 come codice di uscita
} // Chiusura della funzione main
