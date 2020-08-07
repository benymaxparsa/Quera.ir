#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    clock_t start = clock();
    cout << "hello world"<< endl;
    clock_t end = clock();
    cout << int(double(end - start) / double(CLOCKS_PER_SEC)*1000) <<endl;
}