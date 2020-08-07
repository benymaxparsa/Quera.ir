#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    clock_t start = clock();
    cout << "hello world"<< endl;
    clock_t end = clock();
    cout << double(end - start) / double(CLOCKS_PER_SEC) <<endl;
}