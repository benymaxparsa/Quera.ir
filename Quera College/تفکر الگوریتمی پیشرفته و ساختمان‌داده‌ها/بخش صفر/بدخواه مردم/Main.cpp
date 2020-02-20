#include <iostream>
using namespace std;

int main()
{
    int m , n;
    cin >> m >> n;
    int black = m % 2;
    int white = n % 2;
    if (black == 0)
    {  
        if(white == 0)
            cout << "white" << endl;
        else
            cout << "white" << endl;
    
    }
    else if (black == 1)
    {
        if(white == 0)
            cout << "black" <<endl;
        else
            cout << "black" <<endl;
    
    }
    return 0;
}