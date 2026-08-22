#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int size = 0;

    while (str[size] != '\0')
    {
        size++;
    }

    bool palindrome = true;

    for (int i = 0; i < size / 2; i++)
    {
        if (str[i] != str[size - 1 - i])
        {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "String is a palindrome";
    else
        cout << "String is not a palindrome";

    return 0;
}