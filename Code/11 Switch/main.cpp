#include <iostream>
using namespace std;

int main() 
{
   char grade;

   cout << "What letter grade?: A, B, C, D or F Case sensitive ";
   cin >> grade;
   

   switch(grade){
      case 'A':
         cout << "You did great!";
         break;
      case 'B':
         cout << "You did good";
         break;
      case 'C':
         cout << "You did okay";
         break;
      case 'D':
         cout << "You did not do good";
         break;
      case 'F':
         cout << "YOU FAILED!";
         break;
      default:
         cout << "Please only enter in a letter grade (A-F)";
   }

   return 0;
}