#include <iostream>
using namespace std;

int main() 
{
   string name;
   
   while(name.empty()){ //finche è vuoto quindi ritorna true, cicla, appena metti un nome esce
      cout << "Enter your name: ";
      getline(cin, name);
   }
   
   cout << "Hola amigos " << name;

   return 0;
}