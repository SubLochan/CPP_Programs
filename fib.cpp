#include<iostream>
using namespace std;
void fib(int n)
{
    int a = 0 , b = 1,c,i;
    cout << a << " " << b << " ";
    for(i=3;i<=n;i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}
int main()
{
    fib(10);
    return 0;
}
