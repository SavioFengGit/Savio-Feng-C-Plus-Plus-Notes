#include <iostream>
 using namespace std;
string concatString(string string1, string string2);
 
int main()
{
    string firstName = "Bro";
    string lastName = "Code";
    string fullName = concatString(firstName, lastName);
 
    cout << "Hello " << fullName;
 
    return 0;
}

string concatString(string string1, string string2){ //metodo che ritorna le due stringhe concatenate
    return string1 + " " + string2;
}