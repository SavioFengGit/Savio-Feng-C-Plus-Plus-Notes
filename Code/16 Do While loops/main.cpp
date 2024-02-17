#include <iostream>
using namespace std;
 //do while loop = do some block of code first, then repeat again if condition is true

int main()
{
   int number;

   do{
      cout << "Enter a positive Number: "; //una volta lo esegue sicuro, il while potrebbe anche zero
      cin >> number;
   }while(number <= 0);

   cout << "The Number is: " << number;

   return 0;

}
