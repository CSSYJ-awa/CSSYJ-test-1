#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int a =202;
    double b=2323.34345;
    cout<<endl<<endl;
    printf("a=%d\n",a);
    printf("2*a=%d'\n",2*a);
    printf("a=%2d\n",a);
    printf("%3lf\n",b);
    printf("%10.21lf\n",b);
    printf("%-20.2lf\n",b);
    printf("%.21f\n",b);
    return 0;
}