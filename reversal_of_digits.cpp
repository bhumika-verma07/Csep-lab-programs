#include <iostream>
using namespace std;

int reverse(int n, int rev)
{
    int digit;

    if (n == 0)
        return rev;

    digit = n % 10;
    n = n / 10;

    return reverse(n, rev * 10 + digit);
}

int main()
{
    int n;
    int rev = 0;

    cout << "Enter the no. you want to get reversal: ";
    cin >> n;

    cout << "Reversed digits: " << reverse(n, rev);

    return 0;
}
