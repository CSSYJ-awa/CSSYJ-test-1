#include <iostream>
using namespace std;

int main()
{
    long long a1;
    long a2 = 0;
    long long a3;
    cin >> a1;
    // a1 = 6666;
    do
    {
        a3 = 10;
        if (a2 != 0)
        {
            a1 = a2;
            a2 = 0;
        }
        a2 += a1 % a3;
        for (;a1 / a3 != 0;a3 = a3 * 10) a2 += (a1 / a3) % 10;
    } while (!(a2 > 0 & a2 < 10));
    cout << endl
         << a2;
}
