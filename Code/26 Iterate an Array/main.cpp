#include <iostream>
using namespace std;
int main()
{
    //string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    
    for(int i = 0; i < sizeof(grades)/sizeof(grades[0]); i++){
        cout << grades[i] << '\n';
    }

    return 0;
}