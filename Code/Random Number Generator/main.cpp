#include <iostream>
using namespace std;
int main()
{
    srand(time(NULL));

    bool tmp = false;

    while (tmp == false)
    {
        cout << "The number is: ";
        int num = (rand() % 6) + 1;
        cout<< num <<endl;
        string a;
        cout<<"Again? yes or not"<<endl;
        cin >> a;
        cout<<endl;
        if (a == "yes")
        {   
            tmp == false;
        }
        else
        {
            tmp = true;
        }
    }

    return 0;
}