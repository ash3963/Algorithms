#include <iostream>
using namespace std;

int fac(int n)
{
    if (n == 0 || n == 1)
        return n;
    int result = n * fac(n - 1);
    return result;
}

int main()
{

    int n;
    cout << "Enter factorial: ";
    cin >> n;
    cout << fac(n);
    return 0;
}