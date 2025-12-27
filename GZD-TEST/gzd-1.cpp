#include <iostream>
using namespace std;

int main()
{
    long long a1;
    long long a2 = 0;
    long long a3 = 0;
    long a4 = 0;
    long a5 = 0;
    cin >> a1;

    for (; a1 >= 10; a1 = a1 / 10)
    {

        a2 = a2 + a1 % 10;
    }
    if (a1 < 10)
        a2 = a2 + a1;

    for (; a2 >= 10; a2 = a2 / 10)
    {
        a3 = a3 + a2 % 10;
    }
    if (a2 < 10)
        a3 = a3 + a2;

    for (; a3 >= 10; a3 = a3 / 10)
    {
        a4 = a4 + a3 % 10;
    }
    if (a3 < 10)
        a4 = a4 + a3;

    for (; a4 >= 10; a4 = a4 / 10)
    {
        a5 = a5 + a4 % 10;
    }
    if (a4 < 10)
        a5 = a5 + a4;
    cout << endl
         << a5;
}