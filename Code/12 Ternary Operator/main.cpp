#include <iostream>
using namespace std;

int main() 
{
   // ternary operator ?: = replacement to an if/else statement
   // condition ? expression1 : expression2;

   int grade = 50;
   grade >= 60 ? cout << "You pass!" <<endl: cout << "You fail!"<<endl; //se vale la prima condizione prende you pass, altrimenti you fail

   int number = 9;
   number % 2 ? cout << "ODD" <<endl: cout << "EVEN" <<endl;

   bool hungry = true;
   hungry ? cout << "You are hungry" <<endl: cout << "You are full"<<endl;

   return 0;
}
