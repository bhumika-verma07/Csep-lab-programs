#include <iostream>
using namespace std;

bool palindrome(string str, int start, int end)
{
    
    if (start >= end)
        return true;

    // If characters don't match
    if (str[start] != str[end])
        return false;


    return palindrome(str, start + 1, end - 1);
}

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;

    if (palindrome(str, 0, str.length() - 1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}