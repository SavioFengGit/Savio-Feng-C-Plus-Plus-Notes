
#include <iostream>
using namespace std;
int main()
{
    // break = break out of a loop
    // continue = skip current iteration

    for(int i = 1; i <= 20; i++){
        if(i == 13){
            //break;
            continue; //skippa il 13
        }
        cout << i << '\n';
    }

    return 0;
}