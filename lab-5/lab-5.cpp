#include <iostream>
using namespace std;

int main()
{
    int x = 564;
    int* y = &x;
    cout << "y adress " << y << endl;
    cout << "y variable " << *y << endl;
}