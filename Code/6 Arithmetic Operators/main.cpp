#include <iostream>
using namespace std;
int main() 
{
   int students = 20;

   // addition
   // ------------------
   students = students + 1;
   students+=1;
   students++;
   cout<<"students con addition "<<students<<endl;
   // subtraction
   // -----------------
   students = students - 1;
   students-=1;
   students--;
   cout<<"students con subtraction "<<students<<endl;
   // multiplication
   // ------------------
   students = students * 2;
   students*=2;
   cout<<"students con multiplication "<<students<<endl;
   // division
   // ------------------
   students = students / 2;
   students/=2;
   cout<<"students con division "<<students<<endl;
   // modulus
   // ------------------
   int remainder = students % 3;
   cout<<"students con modulus "<<remainder<<endl;

   return 0;
}